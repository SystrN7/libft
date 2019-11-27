/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter_percent.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 16:58:17 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:28 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

void	converter_percent(va_list args, t_list *flags, t_ba *r)
{
	char	*converted;

	args = (void *)args;
	if (!(converted = malloc(2 * sizeof(char))))
		return ;
	converted[0] = '%';
	converted[1] = '\0';
	converted = format_zero("%", converted, flags);
	converted = format_less("%", converted, flags);
	converted = format_fs("%", converted, flags);
	r->array = converted;
	r->size = ft_strlen(converted);
}
