/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_format.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/07 11:14:21 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 15:57:43 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

int		ft_format(const char *format, va_list args, char **buffer)
{
	t_list	*parsed_args;
	t_list	*segments;
	ssize_t	code;
	ssize_t	buffer_size;

	parsed_args = NULL;
	segments = NULL;
	if (!(code = ft_format_parser((char *)format, args, &parsed_args)))
		return (code + PARSER_ERROR);
	if ((code = ft_format_formater((char*)format, parsed_args, &segments)))
		return (code + FORMATER_ERROR);
	if ((buffer_size = ft_lstmerge_segment(segments, buffer)) < 0)
		return (MERGE_ERROR);
	ft_lstclear(&segments, ft_lstdel_array_segment);
	ft_lstclear(&parsed_args, free);
	return (buffer_size);
}

int		ft_format_formater(char *format, t_list *args, t_list **segments)
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
		else if (!(segment = ft_format_inter_args(cursor)))
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
	if (!(cursor = ft_strchr(cursor, '%')))
		cursor = cursor_prev + ft_strlen(cursor_prev);
	if (!(segment = malloc(sizeof(t_bytes_array))))
		return (NULL);
	if (!(segment->array = ft_substr(cursor_prev, 0, cursor - cursor_prev)))
	{
		free(segment);
		return (NULL);
	}
	segment->size = ft_strlen(segment->array);
	return (segment);
}
