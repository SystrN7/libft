/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 14:54:57 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/07 15:36:54 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

/*
**	Function : get_next_line
**	Decription : Get one line of the fd given in argument
**	Parameter :
**		-	(fd) : The file descriptor to read
**		-	(char **)line Varible to retrun the line
**			(set as NULL if no line as read)
**	Return (int)
**		-	1 : If line as read
**		-	0 : If no char as restunred and end of the file has been reached
**		-	-1 : If an error occurred during the reading
*/

int		get_next_line(int fd, char **line)
{
	static t_list	*fd_list = NULL;
	t_list			*use_fd;
	int				return_value;

	use_fd = fd_list;
	while (use_fd != NULL && use_fd->next &&
			fd != ((t_open_fd*)use_fd->content)->fd)
		use_fd = use_fd->next;
	if (use_fd == NULL || ((t_open_fd *)use_fd->content)->fd != fd)
	{
		if (!(use_fd = ft_lstnew(malloc(sizeof(t_open_fd)))))
			return (-1);
		((t_open_fd *)use_fd->content)->fd = fd;
		((t_open_fd *)use_fd->content)->size = 0;
		((t_open_fd *)use_fd->content)->over = NULL;
		use_fd->next = fd_list;
		fd_list = use_fd;
	}
	if ((return_value = get_next_line_core(use_fd->content, line)) <= 0)
	{
		if (((t_open_fd *)use_fd->content)->over != NULL)
			free(((t_open_fd *)use_fd->content)->over);
		ft_lstremove_link(&fd_list, use_fd, free);
	}
	return (return_value);
}

/*
**	Function : get_next_line_core
**	Decription :	Get one line of the fd does not support
**					multiple file descriptors read
**	Parameter :
**		-	(t_open_fd) contexte : The reading context fd with potential
**				unreturned data;
**		-	(char **) line : Varible to retrun the line
**			(set as NULL if no line as read)
**	Return (int)
**		-	1 : If line as read
**		-	0 : If no char as restunred and end of the file has been reached
**		-	-1 : If an error occurred during the reading
*/

int		get_next_line_core(t_open_fd *context, char **line)
{
	t_list	*segment_list;
	char	*buffer;
	int		return_value;
	int		i;

	if (context->fd < 0 || line == NULL)
		return (-1);
	segment_list = NULL;
	if (!(buffer = (char *)malloc((BUFFER_SIZE) * sizeof(char))))
		return (-1);
	return_value = ft_reads_line(context, buffer, &segment_list);
	free(buffer);
	if (context->size > 0)
	{
		i = 0;
		while (++i < context->size)
			context->over[i - 1] = context->over[i];
		context->size--;
	}
	ft_lstmerge_segment(segment_list, line);
	ft_lstclear(&segment_list, ft_lstdel_array_segment);
	return ((return_value < 0) ? -1 : return_value);
}

/*
**	Function : ft_reads_line
**	Decription :	Read One line data and update contexte if unreturned
**					bytes as read and fill the segment list with all
**					allocated segment
**	Parameter :
**		-	(t_open_fd) context: The reading context
**		-	(char *) buffer : the read buffer (have for size the BUFFER_SIZE)
**		-	(t_list **) list: list of segment to return
**	Return (int)
**		-	1 : One line as read
**		-	0 : The end of the file has been reached
**		-	-1 : One error as ocurru durring the file reading
**		-	-2 : An erorr ocurru durring the memory allocation
*/

int		ft_reads_line(t_open_fd *context, char *buffer, t_list **list)
{
	ssize_t		readed;

	readed = BUFFER_SIZE;
	if (context->over != NULL)
	{
		context->size = ft_add_line_segment(list, context->over, context->size);
		if (context->size < 0)
			return (-2);
		if (context->size == 0)
		{
			free(context->over);
			context->over = NULL;
		}
	}
	while (readed == BUFFER_SIZE && context->size == 0)
	{
		if ((readed = read(context->fd, buffer, BUFFER_SIZE)) < 0)
			return (-1);
		if (((context->size = ft_add_line_segment(list, buffer, readed)) < 0))
			return (-2);
		if (context->size != 0)
			if (!(context->over = ft_memdup(buffer, context->size)))
				return (-2);
	}
	return (((readed) || context->size) && *list != NULL);
}

/*
**	Function : ft_add_line_segment
**	Decription :	Add one segment to the segments list
**	Parameter :
**		-	(t_list) list: list of segment
**		-	(char *) str: char readed
**		-	(size) str_size : the size of readed char;
**	Return (ssize_t)
**		-	size : the size of rest (over)
**		-	-1 : An erorr ocurru durring the memory allocation
*/

ssize_t	ft_add_line_segment(t_list **list, char *str, size_t str_size)
{
	size_t	y;
	size_t	size;
	char	*segment;

	y = 0;
	size = 0;
	while (size < str_size && str[size] != '\n')
		size++;
	if (!(segment = (char *)malloc(size * sizeof(char))))
		return (-1);
	while (y < str_size)
	{
		if (y < size)
			((char *)segment)[y] = str[y];
		if ((size + y) < str_size)
			str[y] = str[size + y];
		y++;
	}
	if (!(ft_lstadd_array_segment(list, size, segment)))
		return (-1);
	return (str_size - size);
}
