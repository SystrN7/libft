/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 09:11:01 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 10:13:36 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_lenght;
	size_t	i;

	str_lenght = ft_strlen(s);
	if ((str_lenght < start) || (s == NULL))
		len = 0;
	else if (str_lenght < (start + len))
		len = str_lenght - start;
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len && (s != NULL))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
