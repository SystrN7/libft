/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow_subtraction.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:03:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/06 17:23:17 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_badflow_subtraction(long long a, long long b, int type)
{
	return (
		ft_underflow_subtraction(a, b, type)
		|| ft_overflow_subtraction(a, b, type)
	);
}

/* `a - b` would overflow */

t_bool	ft_overflow_subtraction(long long a, long long b, int type)
{
	return ((b < 0) && (a > ft_overflow_get_max(type) + b));
}

/* `a - b` would underflow */

t_bool	ft_underflow_subtraction(long long a, long long b, int type)
{
	return ((b > 0) && (a < ft_overflow_get_min(type) + b));
}
