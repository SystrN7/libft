/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:06:16 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:38:11 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_unsigned(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	flags = (void *)flags;
	converted = ft_ulltostr((unsigned int)va_arg(args, unsigned int));
	if (converted == NULL)
		return ;
	converted = format_dot("u", converted, flags);
	converted = format_zero("u", converted, flags);
	converted = format_less("u", converted, flags);
	converted = format_fs("u", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
