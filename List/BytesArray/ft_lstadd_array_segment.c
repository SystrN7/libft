/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_array_segment.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 08:57:54 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:10:47 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd_array_segment(t_list **segments, size_t size, char *array)
{
	t_bytes_array	*bytes_array;

	if (!(bytes_array = malloc(sizeof(t_bytes_array))))
	{
		free(array);
		return (NULL);
	}
	bytes_array->size = size;
	bytes_array->array = array;
	return (ft_lstnew_back(segments, bytes_array, ft_lstdel_array_segment));
}
