/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:02:02 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:35:13 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsplit_last(const char *string, int separator)
{
	size_t	lenght;
	size_t	begin;

	lenght = ft_strlen(string);
	begin = (ft_strrchr(string, separator) - string) + 1;
	return (ft_substr(string, begin, lenght - begin));
}
