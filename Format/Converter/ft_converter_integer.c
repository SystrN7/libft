/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_integer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:55:42 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:12:33 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_integer(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	if (!(converted = ft_lltostr((int)va_arg(args, int))))
		return ;
	converted = format_zero("i", converted, flags);
	converted = format_dot("i", converted, flags);
	converted = format_less("i", converted, flags);
	converted = format_fs("i", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
