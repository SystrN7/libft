/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge_segment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 08:22:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:49:53 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

/*
**	Function : ft_lstmerge_segment
**	Decription : Merge all segment to create one string
**	Parameter :
**		-	(t_list) : The segment list to merge
**		-	(char **) : varible to return the result
**	Return (number)
**		-	number : The size of string resuting of concatenation
**			of all sub string containe in segment_list
**		-	-1 : If an error occurred memory reservation
*/

int	ft_lstmerge_segment(t_list *segment_list, char **str)
{
	t_list	*it;
	int		str_lenght;
	int		i;
	int		y;

	str_lenght = 0;
	it = segment_list;
	while (it)
	{
		str_lenght += ((t_bytes_array *)it->content)->size;
		it = it->next;
	}
	*str = ft_managed_malloc((str_lenght + 1) * sizeof(char));
	if (*str == NULL)
		return (-1);
	i = 0;
	while (segment_list)
	{
		y = 0;
		while (y < ((t_bytes_array *)segment_list->content)->size)
			(*str)[i++] = ((t_bytes_array *)segment_list->content)->array[y++];
		segment_list = segment_list->next;
	}
	(*str)[str_lenght] = '\0';
	return (str_lenght + 1);
}
