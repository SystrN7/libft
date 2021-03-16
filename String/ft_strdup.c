/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:39:07 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:38:10 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	void		*string_clone;
	size_t		str_lenght;

	str_lenght = ft_strlen(string);
	string_clone = ft_managed_malloc((str_lenght + 1) * sizeof(char));
	if (string_clone == NULL)
		return (NULL);
	ft_memcpy(string_clone, string, str_lenght + 1);
	return (string_clone);
}
