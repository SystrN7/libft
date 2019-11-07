/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:19:02 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 16:01:42 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
