/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:02:51 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 16:12:08 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest_bytes;
	char	*src_bytes;

	i = 0;
	dest_bytes = (char *)dst;
	src_bytes = (char *)src;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		if (src_bytes[i] == (unsigned char)c)
			return (dest_bytes + (i + 1));
		i++;
	}
	return (NULL);
}
