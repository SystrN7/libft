/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_digits.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/07 14:36:20 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 16:30:36 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
