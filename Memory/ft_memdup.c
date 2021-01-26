/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:32:41 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:27:35 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *bytes_array, size_t array_size)
{
	char		*array_clone;
	size_t		i;

	i = 0;
	if (!(array_clone = ft_managed_malloc(array_size * sizeof(char))))
		return (NULL);
	while (i < array_size)
	{
		array_clone[i] = ((char *)bytes_array)[i];
		i++;
	}
	return (array_clone);
}
