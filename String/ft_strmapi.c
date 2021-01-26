/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:23:59 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:28:43 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_lenght;
	char			*str;

	str_lenght = ft_strlen(s);
	if (!(str = ft_managed_malloc((str_lenght + 1) * sizeof(char))))
		return (NULL);
	str[str_lenght] = '\0';
	i = 0;
	if (s != NULL)
		while (i < str_lenght)
		{
			str[i] = f(i, s[i]);
			i++;
		}
	return (str);
}
