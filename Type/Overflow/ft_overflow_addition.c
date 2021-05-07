/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow_addition.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:03:05 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/06 17:22:56 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_badflow_addition(long long a, long long b, int type)
{
	return (
		ft_underflow_addition(a, b, type)
		|| ft_overflow_addition(a, b, type)
	);
}

/* `a + b` would overflow */

t_bool	ft_overflow_addition(long long a, long long b, int type)
{
	return ((b > 0) && (a > ft_overflow_get_max(type) - b));
}

/* `a + b` would underflow */

t_bool	ft_underflow_addition(long long a, long long b, int type)
{
	return ((b < 0) && (a < ft_overflow_get_min(type) - b));
}
