/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_hexa_upper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:17:19 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:20:25 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_hexa_upper(va_list args, t_list *flags, t_ba *r)
{
	char			*converted;
	unsigned int	number;

	number = (unsigned int)va_arg(args, unsigned int);
	converted = ft_base_ulltostr(number, "0123456789ABCDEF");
	if (converted == NULL)
		return ;
	converted = format_sharp("X", converted, flags);
	converted = format_dot("X", converted, flags);
	converted = format_zero("X", converted, flags);
	converted = format_less("X", converted, flags);
	converted = format_fs("X", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
