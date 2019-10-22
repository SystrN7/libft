/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:52:19 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 13:02:38 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t lenght)
{
	unsigned char	*bytes_string;

	if (b == NULL)
		return (NULL);
	bytes_string = (unsigned char *)b;
	while (lenght-- > 0)
		*bytes_string++ = (unsigned char)c;
	return (b);
}