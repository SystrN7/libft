/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:58:04 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:09:20 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest_bytes;
	char	*src_bytes;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest_bytes = (char *)dst;
	src_bytes = (char *)src;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		i++;
	}
	return (dst);
}
