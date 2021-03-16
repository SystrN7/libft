/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:55:04 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/05 12:33:01 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltostr(long long number)
{
	char	*string;
	int		digits;
	int		i;
	int		is_negative;

	i = 0;
	is_negative = (number < 0);
	digits = ft_count_digits(number);
	string = ft_managed_malloc((digits + is_negative + 1) * sizeof(char));
	if (!string)
		return (NULL);
	i = digits + is_negative;
	while (i)
	{
		string[--i] = '0' + (number % 10) * ((is_negative * -2) + 1);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
	string[digits + is_negative] = '\0';
	return (string);
}
