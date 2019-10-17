/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:04:02 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:25:39 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == NULL || s2 == NULL)
		return ((s1 == s2) ? 0 : (int)str1[i] - (int)str2[i]);
	while (i < n && ((str1[i] && str2[i]) || (i == 0)))
		if (str1[i] != str2[i])
			return ((int)str1[i] - (int)str2[i]);
		else
			i++;
	return (0);
}
