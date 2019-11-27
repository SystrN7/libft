/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flags_utils.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/17 14:00:47 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:00:07 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

char	*insert_zero(char *str, size_t before, size_t after, size_t zero_l)
{
	char *out;

	if (!(out = (void *)malloc((zero_l + 1) * sizeof(char))))
		return (NULL);
	ft_memset(out + before, '0', zero_l - after);
	ft_memcpy(out, str, before);
	ft_memcpy(out + (zero_l - after), str + before, after);
	out[zero_l] = '\0';
	return (out);
}
