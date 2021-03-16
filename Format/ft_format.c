/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:14:21 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 15:21:32 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

int	ft_format(const char *format, va_list args, char **buffer)
{
	t_list	*parsed_args;
	t_list	*segments;
	ssize_t	code;
	ssize_t	buffer_size;

	parsed_args = NULL;
	segments = NULL;
	code = ft_format_parser((char *)format, args, &parsed_args);
	if (!(code))
		return (code + PARSER_ERROR);
	code = ft_format_formater((char *)format, parsed_args, &segments);
	if ((code))
		return (code + FORMATER_ERROR);
	buffer_size = ft_lstmerge_segment(segments, buffer);
	if (buffer_size < 0)
		return (MERGE_ERROR);
	ft_lstclear(&segments, ft_lstdel_array_segment);
	ft_lstclear(&parsed_args, ft_managed_free);
	return (buffer_size);
}

int	ft_format_formater(char *format, t_list *args, t_list **segments)
{
	t_bytes_array	*segment;
	char			*cursor;

	cursor = format;
	while (*cursor != '\0')
	{
		segment = NULL;
		if (*cursor == '%')
		{
			if (((t_format_arg*)args->content)->converted != NULL)
				segment = ((t_format_arg*)args->content)->converted;
			else
				return (FORMATER_ERROR_ARG_FORMAT);
			cursor += ((t_format_arg*)args->content)->parsed_size;
			args = args->next;
		}
		else if (!ftn((void **)&segment, ft_format_inter_args(cursor)))
			return (FORMATER_ERROR_STR_FORMAT);
		else
			cursor += segment->size;
		if (!(ft_lstnew_back(segments, segment, ft_lstdel_array_segment)))
			return (FORMATER_MALLOC_ADD_SEGMENT);
	}
	return (0);
}

t_ba	*ft_format_inter_args(char *cursor)
{
	char			*cursor_prev;
	t_bytes_array	*segment;

	cursor_prev = cursor;
	cursor = ft_strchr(cursor, '%');
	if (!(cursor))
		cursor = cursor_prev + ft_strlen(cursor_prev);
	segment = ft_managed_malloc(sizeof(t_bytes_array));
	if (!(segment))
		return (NULL);
	segment->array = ft_substr(cursor_prev, 0, cursor - cursor_prev);
	if (!(segment->array))
	{
		ft_managed_free(segment);
		return (NULL);
	}
	segment->size = ft_strlen(segment->array);
	return (segment);
}
