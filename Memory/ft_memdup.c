/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:32:41 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:59:55 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *bytes_array, size_t array_size)
{
	char		*array_clone;
	size_t		i;

	i = 0;
	array_clone = ft_managed_malloc(array_size * sizeof(char));
	if (array_clone == NULL)
		return (NULL);
	while (i < array_size)
	{
		array_clone[i] = ((char *)bytes_array)[i];
		i++;
	}
	return (array_clone);
}
