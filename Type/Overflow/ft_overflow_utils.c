/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:09:31 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/06 16:57:24 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

long long	ft_overflow_get_min(int type)
{
	if (type == number_8)
		return (CHAR_MIN);
	else if (type == number_16)
		return (SHRT_MIN);
	else if (type == number_32)
		return (INT_MIN);
	else if (type == number_64)
		return (LONG_MIN);
	return (0);
}

long long	ft_overflow_get_max(int type)
{
	if (type == number_8)
		return (CHAR_MAX);
	else if (type == number_16)
		return (SHRT_MAX);
	else if (type == number_32)
		return (INT_MAX);
	else if (type == number_64)
		return (LONG_MAX);
	return (0);
}
