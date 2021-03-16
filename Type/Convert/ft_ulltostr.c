/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:03:45 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/05 12:34:24 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltostr(unsigned long long number)
{
	int		i;
	char	*string;
	int		digits;

	digits = ft_count_udigits(number);
	string = ft_managed_malloc((digits + 1) * sizeof(char));
	if (!string)
		return (NULL);
	i = digits;
	while (i)
	{
		string[--i] = (number % 10) + '0';
		number /= 10;
	}
	string[digits] = '\0';
	return (string);
}
