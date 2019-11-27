/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter_unsigned.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 11:06:16 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:38 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_unsigned(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	flags = (void *)flags;
	if (!(converted = ft_ulltostr((unsigned int)va_arg(args, unsigned int))))
		return ;
	converted = format_dot("u", converted, flags);
	converted = format_zero("u", converted, flags);
	converted = format_less("u", converted, flags);
	converted = format_fs("u", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
