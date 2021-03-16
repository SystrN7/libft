/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:35:53 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:53:18 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	char_match;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	char_match = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[char_match])
			char_match++;
		else
		{
			i = i - char_match;
			char_match = 0;
		}
		if (!needle[char_match])
			return ((char *)haystack + (i - (char_match - 1)));
		i++;
	}
	return (NULL);
}
