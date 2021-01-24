/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:34:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:07:59 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
