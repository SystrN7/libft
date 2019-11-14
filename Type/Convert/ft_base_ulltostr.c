/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_base_ulltostr.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/14 11:40:41 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 12:09:30 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_base_ulltostr(unsigned long long number, char *base)
{
	int		i;
	char	*str;
	int		digits;
	size_t	base_size;

	if (!(base_size = ft_check_base(base)))
		return (ft_strdup(""));
	digits = ft_count_digits_base(base_size, number);
	if (!(str = malloc((digits + 1) * sizeof(char))))
		return (NULL);
	i = digits;
	while (i)
	{
		str[--i] = base[number % base_size];
		number /= base_size;
	}
	str[digits] = '\0';
	return (str);
}
