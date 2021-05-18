/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 08:09:23 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/18 14:56:41 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtoll(const char *str, long long *number)
{
	size_t	i;
	size_t	j;
	t_bool	negative;

	i = 0;
	j = 0;
	negative = 0;
	while (str[j] == '+' || str[j] == '-')
		if (str[j++] == '-')
			negative = !negative;
	*number = 0;
	while (str[j + i] >= '0' && str[j + i] <= '9')
		*number = (*number * 10) + (str[j + i++] - '0');
	if (negative)
		*number = -(*number);
	return (i);
}
