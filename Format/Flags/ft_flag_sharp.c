/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_sharp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:13:38 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/22 17:25:56 by fgalaup          ###   ########lyon.fr   */
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
		value = ft_managed_malloc(sizeof(char));
		if (value == NULL)
			return (NULL);
		*value = FT_TRUE;
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
		apply_flag = ft_strjoin("0x", converted);
		if (apply_flag == NULL)
			return (NULL);
		ft_managed_free(converted);
	}
	else if (*indicator == 'X')
	{
		apply_flag = ft_strjoin("0X", converted);
		if (apply_flag == NULL)
			return (NULL);
		ft_managed_free(converted);
	}
	else
		apply_flag = converted;
	return (apply_flag);
}
