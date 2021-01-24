/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:19:02 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:09:40 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*bytes_string;
	unsigned char	needle;
	size_t			i;

	i = 0;
	needle = (unsigned char)c;
	bytes_string = (unsigned char *)s;
	while (i < n)
	{
		if (bytes_string[i] == needle)
			return (bytes_string + i);
		i++;
	}
	return (NULL);
}
