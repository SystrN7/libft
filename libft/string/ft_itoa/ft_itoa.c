/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 16:18:06 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 17:19:12 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		is_negative;
	long	number;

	digits = (n < 0) ? 2 : 1;
	is_negative = (n < 0) ? 1 : 0;
	number = n;
	number *= (n < 0) ? -1 : 1;
	while (n /= 10)
		digits++;
	if (!(str = malloc((digits + 1) * sizeof(char))))
		return (NULL);
	str[digits] = '\0';
	while (digits)
	{
		str[--digits] = (number % 10) + '0';
		number /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
