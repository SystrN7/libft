/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_free2d.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/26 10:28:01 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/26 10:32:04 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_free2d(void **address)
{
	while (*address)
		free(*(address++));
}
