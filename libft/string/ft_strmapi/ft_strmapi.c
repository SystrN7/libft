/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 17:23:59 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 08:29:01 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_lenght;
	char			*str;

	str_lenght = ft_strlen(s);
	if (!(str = malloc((str_lenght + 1) * sizeof(char))))
		return (NULL);
	str[str_lenght] = '\0';
	i = 0;
	while (i < str_lenght)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
