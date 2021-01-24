/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 08:09:23 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:07:08 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strtoll(char *str, long long *number)
{
	size_t i;
	t_bool negative;

	i = 0;
	negative = 0;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			negative = !negative;
	*number = 0;
	while (str[i] >= '0' && str[i] <= '9')
		*number = (*number * 10) + (str[i++] - '0');
	if (negative)
		*number = -(*number);
	return (i);
}
