/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ulltostr.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/07 15:03:45 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 16:31:00 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltostr(unsigned long long number)
{
	char	*str;
	int		digits;

	digits = ft_count_udigits(number);
	if (!(str = malloc((digits + 1) * sizeof(char))))
		return (NULL);
	while (digits)
	{
		str[--digits] = (number % 10) + '0';
		number /= 10;
	}
	str[digits] = '\0';
	return (str);
}
