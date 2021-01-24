/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_fs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:47:02 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:12:14 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	*flag_pars_fs(char **start, t_list **flags)
{
	long long	number;
	int			*value;

	number = 0;
	value = NULL;
	flags = (void *)flags;
	if (ft_isdigit(**start))
	{
		*start += ft_strtoll(*start, &number);
		if (!(value = malloc(sizeof(int))))
			return (NULL);
		*value = (int)number;
	}
	return ((void *)value);
}

char	*format_fs(char *indicator, char *converted, t_list *param)
{
	char			*apply_flag;
	int				length;
	int				*field_size;

	if (!ft_lst_associative_get(param, "fs"))
		return (converted);
	if (ft_lst_associative_get(param, "-"))
		return (converted);
	if (ft_lst_associative_get(param, "0"))
		if (!ft_lst_associative_get(param, "."))
			return (converted);
	field_size = ((int *)ft_lst_associative_get(param, "fs"));
	length = ft_strlen(converted);
	if (*indicator == 'c' && length == 0)
		length = 1;
	if (*field_size < length)
		return (converted);
	if (!(apply_flag = malloc((*field_size + 1) * sizeof(char))))
		return (NULL);
	ft_memset(apply_flag, ' ', *field_size - length);
	ft_memcpy(apply_flag + (*field_size - length), converted, length);
	apply_flag[*field_size] = '\0';
	free(converted);
	return (apply_flag);
}
