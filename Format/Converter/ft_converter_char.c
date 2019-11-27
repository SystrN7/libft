/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter_char.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 09:38:57 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:15 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_char(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;
	int		is_zero;
	size_t	length;

	if (!(converted = malloc(2 * sizeof(char))))
		return ;
	converted[0] = (char)va_arg(args, int);
	converted[1] = '\0';
	is_zero = (converted[0] == '\0');
	converted = format_less("c", converted, flags);
	converted = format_fs("c", converted, flags);
	r->array = converted;
	length = ft_strlen(converted);
	if (is_zero)
		r->size = (length) ? length + 1 : ft_strlen(converted + 1) + 1;
	else
		r->size = length;
}
