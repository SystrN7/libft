/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_merge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 10:31:22 by fgalaup           #+#    #+#             */
/*   Updated: 2021/02/17 12:41:48 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_2d_merge(char **array)
{
	char	*string;
	size_t	string_lenght;
	size_t	i;

	string_lenght = 1;
	i = 0;
	while (array[i])
		string_lenght += ft_strlen(array[i++]);
	string = ft_managed_malloc(string_lenght);
	ft_memset(string, 0, string_lenght);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (array[i])
		ft_strlcat(string, array[i++], string_lenght);
	return (string);
}
