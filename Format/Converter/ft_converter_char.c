/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:38:57 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:19:50 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_char(va_list args, t_list *flags, t_bytes_array *result)
{
	char	*converted;
	int		is_zero;
	size_t	length;

	converted = ft_managed_malloc(2 * sizeof(char));
	if (converted == NULL)
		return ;
	converted[0] = (char)va_arg(args, int);
	converted[1] = '\0';
	is_zero = (converted[0] == '\0');
	converted = format_less("c", converted, flags);
	converted = format_fs("c", converted, flags);
	result->array = converted;
	length = ft_strlen(converted);
	if (is_zero)
	{
		if (length)
			result->size = length + 1;
		else
			result->size = ft_strlen(converted + 1) + 1;
	}
	else
		result->size = length;
}
