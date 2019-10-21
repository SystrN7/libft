/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:02:51 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 10:40:30 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest_bytes;
	unsigned char const	*src_bytes;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	dest_bytes = dst;
	src_bytes = src;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		if (src_bytes[i] == (unsigned char)c)
			return (dest_bytes + (i + 1));
		i++;
	}
	return (NULL);
}
