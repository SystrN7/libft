/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:03:45 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:06:43 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltostr(unsigned long long number)
{
	int		i;
	char	*str;
	int		digits;

	digits = ft_count_udigits(number);
	if (!(str = malloc((digits + 1) * sizeof(char))))
		return (NULL);
	i = digits;
	while (i)
	{
		str[--i] = (number % 10) + '0';
		number /= 10;
	}
	str[digits] = '\0';
	return (str);
}
