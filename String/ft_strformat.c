/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strformat.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/27 16:39:13 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:47:40 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strformat(char **result, const char *format, ...)
{
	va_list	args;
	int		size;

	if (result == NULL)
		return (-1);
	*result = NULL;
	va_start(args, format);
	size = ft_format(format, args, result);
	if (size < 0)
		size = -1;
	va_end(args);
	size += (size != 0) * -1;
	return (size);
}
