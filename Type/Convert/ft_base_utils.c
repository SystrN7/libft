/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:24:14 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:07:20 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
		if (base[i] == c)
			return (1);
		else
			i++;
	return (0);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		while (base[j])
			if (i != j && base[i] == base[j])
				return (0);
			else
				j++;
		j = 0;
		i++;
	}
	return (i);
}

char	*ft_is_negative(char *str, char *is_negative)
{
	int	i;

	i = 0;
	*is_negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		*is_negative *= (str[i] == '-') ? -1 : 1;
		i++;
	}
	return (str + i);
}

size_t	ft_count_digits_base(int base_size, unsigned long long number)
{
	size_t	digits;

	digits = 1;
	while (number /= base_size)
		digits++;
	return (digits);
}
