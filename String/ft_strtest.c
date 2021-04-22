/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:03:28 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/22 17:25:45 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_strtest(const char *string, int (*f)(int))
{
	size_t	i;

	i = 0;
	if (string == NULL)
		return (FT_FALSE);
	while (string[i])
	{
		if (f(string[i]) == FT_FALSE)
			return (FT_FALSE);
		i++;
	}
	return (FT_TRUE);
}
