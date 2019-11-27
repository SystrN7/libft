/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter_hexa_lower.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 13:11:45 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:18 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_hexa_lower(va_list args, t_list *flags, t_ba *r)
{
	char			*converted;
	unsigned int	number;

	number = (unsigned int)va_arg(args, unsigned int);
	if (!(converted = ft_base_ulltostr(number, "0123456789abcdef")))
		return ;
	converted = format_sharp("x", converted, flags);
	converted = format_dot("x", converted, flags);
	converted = format_zero("x", converted, flags);
	converted = format_less("x", converted, flags);
	converted = format_fs("x", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
