/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 11:34:17 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 11:33:22 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_charset(const char c, char const *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	size;
	char			*start;
	char			*stop;
	char			*str;

	size = 0;
	if (s1 != NULL && set != NULL)
	{
		start = (char *)s1;
		stop = (char *)s1;
		while (*stop)
			stop++;
		stop--;
		while (*start && ft_is_in_charset(*start, set))
			start++;
		while (s1 <= stop && ft_is_in_charset(*stop, set))
			stop--;
		size = (stop - start > 0) ? (stop - start) + 1 : 0;
	}
	if (!(str = malloc(((size + 1) * sizeof(char)))))
		return (NULL);
	ft_strlcpy(str, start, size + 1);
	return (str);
}
