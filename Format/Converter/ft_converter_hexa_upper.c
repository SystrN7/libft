/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_hexa_upper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:17:19 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:12:37 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_hexa_upper(va_list args, t_list *flags, t_ba *r)
{
	char			*converted;
	unsigned int	number;

	number = (unsigned int)va_arg(args, unsigned int);
	if (!(converted = ft_base_ulltostr(number, "0123456789ABCDEF")))
		return ;
	converted = format_sharp("X", converted, flags);
	converted = format_dot("X", converted, flags);
	converted = format_zero("X", converted, flags);
	converted = format_less("X", converted, flags);
	converted = format_fs("X", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
