/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:19:02 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 13:50:21 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*byte_str;
	size_t			i;

	i = 0;
	byte_str = (unsigned char *)str;
	if ((unsigned char)c == 0 && n > ft_strlen((char *)byte_str))
		return (byte_str + ft_strlen((char *)byte_str));
	if ((unsigned char)c == 0)
		return (NULL);
	while (i < n)
	{
		if (byte_str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
