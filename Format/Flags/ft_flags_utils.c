/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 14:00:47 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:24:27 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

char	*insert_zero(char *str, size_t before, size_t after, size_t zero_l)
{
	char *out;

	if (!(out = (void *)ft_managed_malloc((zero_l + 1) * sizeof(char))))
		return (NULL);
	ft_memset(out + before, '0', zero_l - after);
	ft_memcpy(out, str, before);
	ft_memcpy(out + (zero_l - after), str + before, after);
	out[zero_l] = '\0';
	return (out);
}
