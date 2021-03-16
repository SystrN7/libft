/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_array_segment.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 08:57:54 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:49:03 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd_array_segment(t_list **segments, int size, char *array)
{
	t_bytes_array	*bytes_array;

	bytes_array = ft_managed_malloc(sizeof(t_bytes_array));
	if (bytes_array == NULL)
	{
		ft_managed_free(array);
		return (NULL);
	}
	bytes_array->size = size;
	bytes_array->array = array;
	return (ft_lstnew_back(segments, bytes_array, ft_lstdel_array_segment));
}
