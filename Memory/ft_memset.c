/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:52:19 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 15:59:04 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t lenght)
{
	size_t			i;
	unsigned char	*bytes_string;

	i = 0;
	bytes_string = (unsigned char *)b;
	while (i < lenght)
		bytes_string[i++] = (unsigned char)c;
	return (b);
}
