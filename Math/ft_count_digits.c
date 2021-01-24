/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:36:20 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:10:08 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(long long number)
{
	size_t digits;

	digits = 1;
	while (number /= 10)
		digits++;
	return (digits);
}

size_t	ft_count_udigits(unsigned long long number)
{
	size_t digits;

	digits = 1;
	while (number /= 10)
		digits++;
	return (digits);
}
