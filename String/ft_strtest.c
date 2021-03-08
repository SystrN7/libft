/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:03:28 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/08 13:55:19 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_strtest(const char *string, int (*f)(int))
{
	size_t	i;

	i = 0;
	if (string == NULL)
		return (FALSE);
	while (string[i])
	{
		if (f(string[i]) == FALSE)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
