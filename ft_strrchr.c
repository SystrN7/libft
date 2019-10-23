/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:25:08 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 11:54:54 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	int i;

	if (s == NULL)
		return (NULL);
	i = (ft_strlen(s) + 1);
	while (i-- != 0)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
	}
	return (NULL);
}
