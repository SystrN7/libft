/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:39:07 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:28:39 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void		*str_clone;
	size_t		str_lenght;

	str_lenght = ft_strlen(s1);
	if (!(str_clone = ft_managed_malloc((str_lenght + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(str_clone, s1, str_lenght + 1);
	return (str_clone);
}
