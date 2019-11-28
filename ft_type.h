/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:30:05 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/28 10:00:48 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_TYPE_H
# define FT_TYPE_H

# define TRUE 1
# define FALSE 0

typedef char		t_boolean;
typedef char		t_byte;
typedef t_byte*		t_bytes;

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct		s_bytes_array
{
	size_t			size;
	char			*array;
}					t_bytes_array;

typedef struct		s_associative
{
	char			*key;
	void			*value;
}					t_associative;

/*
** Type Name: t_open_fd
** Description : This structure type store one file descriptor
** 					with non returned content.
** Vars :
**	-	(int) fd : The file desciptor (id).
** 	-	(ssize) size : the size of unreturned content.
**	-	(char *) over : The unreturned content.
*/

typedef struct		s_open_fd
{
	int				fd;
	ssize_t			size;
	char			*over;
}					t_open_fd;

#endif
