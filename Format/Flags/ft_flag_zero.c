/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_zero.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 16:34:57 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 15:59:44 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	*flag_pars_zero(char **start, t_list **flags)
{
	char		*value;

	value = NULL;
	flags = (void *)flags;
	if (**start == '0')
	{
		(*start)++;
		if (!(value = malloc(sizeof(t_boolean))))
			return (NULL);
		*value = TRUE;
	}
	return (value);
}

char	*format_zero(char *indicator, char *convert, t_list *flg)
{
	char			*apply_flag;
	int				length;
	int				zero_count;

	apply_flag = convert;
	if (!ft_lst_associative_get(flg, "fs") || ft_lst_associative_get(flg, "."))
		return (convert);
	if (!ft_lst_associative_get(flg, "-") && ft_lst_associative_get(flg, "0"))
	{
		length = ft_strlen(convert);
		zero_count = *((int *)ft_lst_associative_get(flg, "fs"));
		if (zero_count <= length)
			return (convert);
		if (*indicator == 'x' || *indicator == 'X')
			if (!ft_memcmp("0x", convert, 2) || !ft_memcmp("0x", convert, 2))
				apply_flag = insert_zero(convert, 2, length - 2, zero_count);
		if (ft_is_in_charset(*indicator, "di"))
			if (*convert == '-')
				apply_flag = insert_zero(convert, 1, length - 1, zero_count);
		if (convert == apply_flag)
			apply_flag = insert_zero(convert, 0, length, zero_count);
		free(convert);
	}
	return (apply_flag);
}
