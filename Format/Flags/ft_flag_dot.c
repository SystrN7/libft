/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_dot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 12:04:15 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:30:11 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void		*flag_pars_dot(char **start, t_list **flags)
{
	long long	number;
	int			number_length;
	int			*value;

	number = 0;
	value = NULL;
	flags = (void *)flags;
	if (**start == '.')
	{
		(*start)++;
		number_length = ft_strtoll(*start, &number);
		*start += number_length;
		if (!(value = ft_managed_malloc(sizeof(int))))
			return (NULL);
		if (number_length == 0 && **start == '*')
			*value = -1;
		else
			*value = number;
	}
	return ((void *)value);
}

static void	*format_dot2(char *indicator, int precision, char *convert)
{
	char			*apply_flag;

	apply_flag = convert;
	if (*indicator == 's')
		apply_flag = ft_substr(convert, 0, precision);
	if (*indicator != 's' && precision == 0 && *convert == '0')
		apply_flag = ft_substr(convert, 0, 0);
	if (convert != apply_flag)
		ft_managed_free(convert);
	return (apply_flag);
}

char		*format_dot(char *indicator, char *convert, t_list *param)
{
	char			*apply_flag;
	int				length;
	int				precision;

	apply_flag = convert;
	if (ft_lst_associative_get(param, "."))
	{
		length = ft_strlen(convert);
		precision = *((int *)ft_lst_associative_get(param, "."));
		apply_flag = format_dot2(indicator, precision, convert);
		if (convert != apply_flag || precision < length)
			return (apply_flag);
		if (*indicator == 'x' || *indicator == 'X')
			if (!ft_memcmp("0x", convert, 2) || !ft_memcmp("0X", convert, 2))
				apply_flag = insert_zero(convert, 2, length - 2, precision);
		if (ft_is_in_charset(*indicator, "di"))
			if (*convert == '-')
				apply_flag = insert_zero(convert, 1, length - 1, precision + 1);
		if (convert == apply_flag && ft_is_in_charset(*indicator, "xXdui"))
			apply_flag = insert_zero(convert, 0, length, precision);
		if (convert != apply_flag)
			ft_managed_free(convert);
	}
	return (apply_flag);
}
