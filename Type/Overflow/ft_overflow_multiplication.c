/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow_multiplication.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:02:58 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/06 17:21:57 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_badflow_multiplication(long long a, long long b, int type)
{
	return (
		ft_underflow_multiplication(a, b, type)
		|| ft_overflow_multiplication(a, b, type)
	);
}

/* `a * b` can overflow */
/* `a * b` (or `a / b`) can overflow */
/* `a + b` would overflow */

t_bool	ft_overflow_multiplication(long long a, long long b, int type)
{
	return (
		((a == -1) && (b == ft_overflow_get_min(type)))
		|| ((b == -1) && (a == ft_overflow_get_min(type)))
		|| (a > ft_overflow_get_max(type) / b)
	);
}

/* `a + b` would underflow */

t_bool	ft_underflow_multiplication(long long a, long long b, int type)
{
	return (a < ft_overflow_get_min(type) / b);
}
