/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:49:19 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:37:50 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_string(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;
	char	*arg;
	int		*dot;
	int		*star;

	dot = ft_lst_associative_get(flags, ".");
	star = ft_lst_associative_get(flags, "*");
	if (dot != NULL && *dot == -1)
		if (star == NULL || *star != FLAG_STAR_DOT)
			*dot = 0;
	if (dot && *dot == 0)
		arg = "";
	else
		arg = (char *)va_arg(args, char *);
	if (arg == NULL)
		arg = "(null)";
	converted = ft_strdup(arg);
	if (converted == NULL)
		return ;
	if (dot != NULL && *dot != -1)
		converted = format_dot("s", converted, flags);
	converted = format_less("s", converted, flags);
	converted = format_fs("s", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
