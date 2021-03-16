/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:11:01 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:45:45 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t lenght)
{
	char	*sub_string;
	size_t	sub_string_lenght;
	size_t	i;

	sub_string_lenght = ft_strlen(source);
	if ((sub_string_lenght < start))
		lenght = 0;
	else if (sub_string_lenght < (start + lenght))
		lenght = sub_string_lenght - start;
	sub_string = ft_managed_malloc((lenght + 1) * sizeof(char));
	if (!sub_string)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		sub_string[i] = source[start + i];
		i++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}
