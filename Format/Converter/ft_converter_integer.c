/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_integer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:55:42 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:20:54 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_integer(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	converted = ft_lltostr((int)va_arg(args, int));
	if (converted == NULL)
		return ;
	converted = format_zero("i", converted, flags);
	converted = format_dot("i", converted, flags);
	converted = format_less("i", converted, flags);
	converted = format_fs("i", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
