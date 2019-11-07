/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:44:29 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 16:55:46 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *string, size_t size)
{
	size_t length;

	length = 0;
	while (length < size && string[length])
		length++;
	return (length);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_lenght;
	size_t	src_lenght;

	i = 0;
	dest_lenght = ft_strnlen(dst, size);
	src_lenght = ft_strlen(src);
	if (size == dest_lenght)
		return (src_lenght + size);
	while (i < (size - (1 + dest_lenght)) && src[i])
	{
		dst[dest_lenght + i] = src[i];
		i++;
	}
	dst[dest_lenght + i] = '\0';
	return (dest_lenght + src_lenght);
}
