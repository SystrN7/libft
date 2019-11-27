/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter_pointer.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 13:40:02 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:31 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_pointer(va_list args, t_list *flags, t_ba *r)
{
	char				*hexa_conv;
	char				*converted;
	unsigned long long	number;

	hexa_conv = NULL;
	number = (unsigned long long)va_arg(args, void *);
	if (ft_lst_associative_get(flags, "."))
		if (*((int *)ft_lst_associative_get(flags, ".")) == 0 && number == 0)
			if (!(hexa_conv = ft_strdup("")))
				return ;
	if (hexa_conv == NULL)
		if (!(hexa_conv = ft_base_ulltostr(number, "0123456789abcdef")))
			return ;
	converted = ft_strjoin("0x", hexa_conv);
	free(hexa_conv);
	if (!converted)
		return ;
	converted = format_less("%", converted, flags);
	converted = format_fs("%", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
