/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter_integer.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 09:55:42 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:23 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_integer(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	if (!(converted = ft_lltostr((int)va_arg(args, int))))
		return ;
	converted = format_zero("i", converted, flags);
	converted = format_dot("i", converted, flags);
	converted = format_less("i", converted, flags);
	converted = format_fs("i", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
