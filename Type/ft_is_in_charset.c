/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_in_charset.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 08:43:20 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 08:47:24 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_charset(const int c, char const *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}
