/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_pointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:40:02 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:37:01 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_pointer(va_list args, t_list *flags, t_ba *r)
{
	char				*hexa_conv;
	char				*converted;
	unsigned long long	number;

	hexa_conv = NULL;
	number = (unsigned long long)va_arg(args, void *);
	if (ft_lst_associative_get(flags, ".")
		&& *((int *)ft_lst_associative_get(flags, ".")) == 0 && number == 0)
	{
		hexa_conv = ft_strdup("");
		if (!(hexa_conv))
			return ;
	}
	if (hexa_conv == NULL)
		hexa_conv = ft_base_ulltostr(number, "0123456789abcdef");
	if (hexa_conv == NULL)
		return ;
	converted = ft_strjoin("0x", hexa_conv);
	ft_managed_free(hexa_conv);
	if (!converted)
		return ;
	converted = format_less("%", converted, flags);
	converted = format_fs("%", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
