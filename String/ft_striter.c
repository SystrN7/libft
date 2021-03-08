/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:23:59 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/05 16:57:25 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_striter(char *string, int (*f)(int))
{
	size_t	i;

	i = 0;
	if (string == NULL)
		return (NULL);
	while (string[i])
	{
		string[i] = f(string[i]);
		i++;
	}
	return (string);
}
