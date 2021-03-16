/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_star.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:23:24 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:43:19 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

void	*flag_pars_star(char **start, va_list args, t_list **flags)
{
	int		*value;

	if (**start == '*')
	{
		value = ft_managed_malloc(sizeof(int));
		if (value == NULL)
			return (NULL);
		if (*(*start - 1) == '.')
		{
			*value = FLAG_STAR_DOT;
			format_star(args, flags, FLAG_STAR_DOT);
		}
		else
		{
			*value = FLAG_STAR_DOT;
			format_star(args, flags, FLAG_STAR_FS);
		}
		(*start)++;
		return (value);
	}
	return (NULL);
}

int	ft_set_fs(t_list **flags, int *size, int size_zero, t_boolean less)
{
	t_boolean	*status;

	status = ft_managed_malloc(sizeof(t_boolean));
	if (status == NULL)
		return (-1);
	*status = less;
	if (size_zero)
		*size = 0;
	ft_lst_associative_set(flags, "fs", size);
	ft_lst_associative_set(flags, "-", status);
	return (0);
}

int	format_star(va_list args, t_list **flags, int affected)
{
	int			value;
	int			*size;

	value = (int)va_arg(args, int);
	if (ft_lst_associative_get(*flags, "fs") && value < 0)
		return (0);
	size = ft_managed_malloc(sizeof(int));
	if (size == NULL)
		return (-1);
	*size = ft_abs(value);
	if (value < 0)
	{
		if (affected == FLAG_STAR_DOT)
			return (ft_set_fs(flags, size, 1, FALSE));
		else
			return (ft_set_fs(flags, size, 0, TRUE));
	}
	else
	{
		if (affected == FLAG_STAR_FS)
			ft_lst_associative_set(flags, "fs", size);
		else if (affected == FLAG_STAR_DOT)
			ft_lst_associative_set(flags, ".", size);
	}
	return (0);
}
