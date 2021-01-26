/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_sharp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:13:38 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:30:27 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	*flag_pars_sharp(char **start, t_list **flags)
{
	char		*value;

	value = NULL;
	flags = (void *)flags;
	if (**start == '#')
	{
		(*start)++;
		if (!(value = ft_managed_malloc(sizeof(char))))
			return (NULL);
		*value = TRUE;
	}
	return (value);
}

char	*format_sharp(char *indicator, char *converted, t_list *params)
{
	char	*apply_flag;

	if (!ft_lst_associative_get(params, "#"))
		return (converted);
	params = (void *)params;
	if (*indicator == 'x')
	{
		if (!(apply_flag = ft_strjoin("0x", converted)))
			return (NULL);
		ft_managed_free(converted);
	}
	else if (*indicator == 'X')
	{
		if (!(apply_flag = ft_strjoin("0X", converted)))
			return (NULL);
		ft_managed_free(converted);
	}
	else
		apply_flag = converted;
	return (apply_flag);
}
