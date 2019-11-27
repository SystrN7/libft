/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_less.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/17 11:25:50 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 15:59:32 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	*flag_pars_less(char **start, t_list **flags)
{
	char		*value;

	value = NULL;
	flags = (void *)flags;
	if (**start == '-')
	{
		(*start)++;
		if (!(value = malloc(sizeof(t_boolean))))
			return (NULL);
		*value = TRUE;
	}
	return (value);
}

char	*format_less(char *indicator, char *converted, t_list *param)
{
	char			*apply_flag;
	int				length;
	int				*field_size;

	if (ft_lst_associative_get(param, "-"))
	{
		if (!ft_lst_associative_get(param, "fs"))
			return (converted);
		field_size = ((int *)ft_lst_associative_get(param, "fs"));
		length = ft_strlen(converted);
		if (*indicator == 'c' && length == 0)
			length = 1;
		if (*field_size < length)
			return (converted);
		if (!(apply_flag = malloc((*field_size + 1) * sizeof(char))))
			return (NULL);
		ft_memset(apply_flag + length, ' ', *field_size - length);
		ft_memcpy(apply_flag, converted, length);
		apply_flag[*field_size] = '\0';
		free(converted);
		return (apply_flag);
	}
	return (converted);
}
