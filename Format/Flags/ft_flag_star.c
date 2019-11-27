/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_star.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/18 14:23:24 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 15:59:38 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	*flag_pars_star(char **start, va_list args, t_list **flags)
{
	int		*value;

	if (**start == '*')
	{
		if (!(value = malloc(sizeof(int))))
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

int		ft_set_fs(t_list **flags, int *size, int size_zero, t_boolean less)
{
	t_boolean	*status;

	if (!(status = malloc(sizeof(t_boolean))))
		return (-1);
	*status = less;
	if (size_zero)
		*size = 0;
	ft_lst_associative_set(flags, "fs", size);
	ft_lst_associative_set(flags, "-", status);
	return (0);
}

int		format_star(va_list args, t_list **flags, int affected)
{
	int			value;
	int			*size;

	value = (int)va_arg(args, int);
	if (ft_lst_associative_get(*flags, "fs") && value < 0)
		return (0);
	if (!(size = malloc(sizeof(int))))
		return (-1);
	*size = (value < 0) ? -value : value;
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
