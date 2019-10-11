/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:19:02 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 10:04:31 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*bytes_string;
	unsigned char	needle;
	size_t			i;

	i = 0;
	bytes_string = (unsigned char *)s;
	needle = (unsigned char)c;
	while (i < n)
	{
		if (*(bytes_string + i) == needle)
			return (bytes_string + i);
		i++;
	}
	return (NULL);
}
