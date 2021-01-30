/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:48:51 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/30 14:41:05 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

ssize_t	ft_format_parser(char *format, va_list args, t_list **converted)
{
	t_format_arg	*parsed_arg;
	ssize_t			i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (!(parsed_arg = ft_calloc(1, sizeof(t_format_arg))))
				return (-1);
			if ((i += ft_format_parse_one(format + i, args, parsed_arg)) < 0)
				return (-1);
			if (!(ft_lstnew_back(converted, parsed_arg, ft_managed_free)))
				return (-1);
		}
		else
			i++;
	}
	return (1);
}

ssize_t	ft_format_parse_one(char *start, va_list args, t_format_arg *convert)
{
	t_bytes_array	*converted_arg;
	t_list			*flags;
	ssize_t			r;
	ssize_t			i;

	i = 0;
	flags = NULL;
	i += (start[i] == '%');
	while ((r = ft_format_parse_flag((start + i), args, &flags)) > 0)
		i += r;
	if (r == -1)
		return (-1);
	if (!(converted_arg = ft_format_convert(start + i++, args, flags)))
		return (-1);
	if (converted_arg->array == NULL)
		return (-1);
	convert->parsed_size = i;
	convert->converted = converted_arg;
	ft_lstclear(&flags, ft_lst_associative_del_free);
	return (i);
}

ssize_t	ft_format_parse_flag(char *start, va_list args, t_list **flags)
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
		flag = (value) ? "*" : flag;
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
	if (!(segment = ft_managed_malloc(sizeof(t_bytes_array))))
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
