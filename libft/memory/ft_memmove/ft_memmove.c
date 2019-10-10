/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:10:51 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 09:12:37 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest_bytes;
	char	*src_bytes;

	i = 0;
	dest_bytes = (char *)dst;
	src_bytes = (char *)src;
	if (dst < src)
		while (++i < len)
			*dest_bytes++ = *src_bytes++;
	else
	{
		dest_bytes = dest_bytes + (len - 1);
		src_bytes = src_bytes + (len - 1);
		while (++i <= len)
			*dest_bytes-- = *src_bytes--;
	}
	return (dst);
}
