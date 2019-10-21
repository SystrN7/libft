/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:10:51 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 12:58:55 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest_bytes;
	char	*src_bytes;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest_bytes = (char *)dst;
	src_bytes = (char *)src;
	if (dst <= src)
		ft_memcpy(dest_bytes, src_bytes, len);
	else
	{
		i = len;
		while (i-- != 0)
			dest_bytes[i] = src_bytes[i];
	}
	return (dst);
}
