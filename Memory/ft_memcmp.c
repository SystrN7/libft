/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:51:09 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 08:37:26 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	return (0);
}
