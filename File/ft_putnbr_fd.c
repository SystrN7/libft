/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:30:31 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:13:02 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int fd, long long number)
{
	int		i;
	int		digits;
	char	buffer[20];
	int		is_negative;

	i = 0;
	is_negative = (number < 0);
	digits = ft_count_digits(number);
	i = digits + is_negative;
	while (i)
	{
		buffer[--i] = '0' + (number % 10) * ((is_negative * -2) + 1);
		number /= 10;
	}
	if (is_negative)
		buffer[0] = '-';
	write(fd, buffer, digits + is_negative);
}
