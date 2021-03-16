/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:48:51 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 18:24:09 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

int	ft_format_parser(char *format, va_list args, t_list **converted)
{
	t_format_arg	*parsed_arg;
	int				i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			parsed_arg = ft_calloc(1, sizeof(t_format_arg));
			if (parsed_arg == NULL)
				return (-1);
			i += ft_format_parse_one(format + i, args, parsed_arg);
			if (i < 0)
				return (-1);
			if (!(ft_lstnew_back(converted, parsed_arg, ft_managed_free)))
				return (-1);
		}
		else
			i++;
	}
	return (1);
}

int	ft_format_parse_one(char *start, va_list args, t_format_arg *convert)
{
	t_bytes_array	*converted_arg;
	t_list			*flags;
	int				r;
	int				i;

	r = 0;
	i = 0;
	flags = NULL;
	i += (start[i] == '%');
	while (fti(&r, ft_format_parse_flag((start + i), args, &flags)) > 0)
		i += r;
	if (r == -1)
		return (-1);
	converted_arg = ft_format_convert(start + i++, args, flags);
	if (converted_arg == NULL)
		return (-1);
	if (converted_arg->array == NULL)
		return (-1);
	convert->parsed_size = i;
	convert->converted = converted_arg;
	ft_lstclear(&flags, ft_lst_associative_del_free);
	return (i);
}

int	ft_format_parse_flag(char *start, va_list args, t_list **flags)
{
	t_format_flag	*it;
	char			*cursor;
	void			*value;
	char			*flag;

	cursor = start;
	it = ft_modular_flags();
	value = NULL;
	while (it->flag != NULL && cursor == start)
	{
		flag = it->flag;
		value = it->ft_flags_parser(&cursor, flags);
		it++;
	}
	if (value == NULL && cursor == start)
	{
		value = flag_pars_star(&cursor, args, flags);
		flag = ft_tern_pt(value != NULL, "*", flag);
	}
	if (cursor != start && value != NULL)
		if (!ft_lst_associative_set(flags, flag, value))
			return (-1);
	if (cursor != start && value == NULL)
		return (-1);
	return (cursor - start);
}

t_ba	*ft_format_convert(char *start, va_list args, t_list *flags)
{
	t_format_converter	*converters;
	t_bytes_array		*segment;

	converters = ft_modular_converter();
	segment = ft_managed_malloc(sizeof(t_bytes_array));
	if (segment == NULL)
		return (NULL);
	segment->size = 0;
	segment->array = NULL;
	while (converters->indicator != NULL)
	{
		if (*converters->indicator == *start)
		{
			converters->ft_converter(args, flags, segment);
			return (segment);
		}
		converters++;
	}
	ft_managed_free(segment);
	return (NULL);
}
