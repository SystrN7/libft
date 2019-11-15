/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtoll.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 08:09:23 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 08:10:58 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strtoll(char *str, long long *number)
{
	size_t i;

	i = 0;
	*number = 0;
	while (str[i] >= '0' && str[i] <= '9')
		*number = (*number * 10) + (str[i++] - '0');
	return (i);
}
