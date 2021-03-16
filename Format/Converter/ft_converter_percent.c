/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_percent.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:58:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:21:12 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_percent(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	args = (void *)args;
	converted = ft_managed_malloc(2 * sizeof(char));
	if (converted == NULL)
		return ;
	converted[0] = '%';
	converted[1] = '\0';
	converted = format_zero("%", converted, flags);
	converted = format_less("%", converted, flags);
	converted = format_fs("%", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
