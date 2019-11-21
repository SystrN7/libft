/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmerge_segment.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/21 08:22:17 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/21 09:54:42 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function : ft_lstmerge_segment
**	Decription : Merge all segment to create one string
**	Parameter :
**		-	(t_list) : The segment list to merge
**		-	(char **) : varible to return the result
**	Return (string)
**		-	number : The size of string resuting of concatenation
**			of all sub string containe in segment_list
**		-	-1 : If an error occurred memory reservation
*/

ssize_t	ft_lstmerge_segment(t_list *segment_list, char **str)
{
	t_list	*it;
	size_t	str_lenght;
	size_t	i;
	size_t	y;

	str_lenght = 0;
	it = segment_list;
	while (it)
	{
		str_lenght += ((t_bytes_array *)it)->size;
		it = it->next;
	}
	if (!(*str = (char *)malloc((str_lenght + 1) * sizeof(char))))
		return (-1);
	i = 0;
	while (segment_list)
	{
		y = 0;
		while (y < ((t_bytes_array *)segment_list)->size)
			(*str)[i++] = ((t_bytes_array *)it)->array[y++];
		segment_list = segment_list->next;
	}
	(*str)[str_lenght] = '\0';
	return (str_lenght + 1);
}
