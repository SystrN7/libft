/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_ulltostr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:40:41 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/05 12:24:35 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_base_ulltostr(unsigned long long number, char *base)
{
	int		i;
	char	*string;
	int		digits;
	size_t	base_size;

	base_size = ft_check_base(base);
	if (!base_size)
		return (ft_strdup(""));
	digits = ft_count_digits_base(base_size, number);
	string = ft_managed_malloc((digits + 1) * sizeof(char));
	if (!string)
		return (NULL);
	i = digits;
	while (i)
	{
		string[--i] = base[number % base_size];
		number /= base_size;
	}
	string[digits] = '\0';
	return (string);
}
