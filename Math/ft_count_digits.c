/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:36:20 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 18:10:37 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(long long number)
{
	size_t	digits;

	digits = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number /= 10;
		digits++;
	}
	return (digits);
}

size_t	ft_count_udigits(unsigned long long number)
{
	size_t	digits;

	digits = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number /= 10;
		digits++;
	}
	return (digits);
}
