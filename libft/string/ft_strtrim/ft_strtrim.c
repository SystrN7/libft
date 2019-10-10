/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 11:34:17 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 12:15:36 by fgalaup     ###    #+. /#+    ###.fr     */
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
	char	*start;
	char	*stop;
	char	*str;

	start = (char *)s1;
	stop = (char *)s1;
	while (*stop)
		stop++;
	while (ft_is_in_charset(*start, set))
		start++;
	stop--;
	while (ft_is_in_charset(*stop, set))
		stop--;
	if (!(str = malloc(stop - start + 1 * sizeof(char))))
		return (NULL);
	ft_strlcpy(str, start, (stop - start) + 2);
	return (str);
}
