/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:59:21 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:51:15 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *string1, char const *string2)
{
	char	*string;
	size_t	string1_lenght;
	size_t	string2_lenght;

	string1_lenght = ft_strlen(string1);
	string2_lenght = ft_strlen(string2);
	string = ft_calloc(string1_lenght + string2_lenght + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_strlcat(string, string1, string1_lenght + 1);
	ft_strlcat(string, string2, string1_lenght + string2_lenght + 1);
	return (string);
}
