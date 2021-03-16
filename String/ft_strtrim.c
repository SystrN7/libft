/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:34:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:56:27 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *source, char const *set)
{
	unsigned long	size;
	char			*start;
	char			*stop;
	char			*string;

	size = 0;
	if (source != NULL && set != NULL)
	{
		start = (char *)source;
		stop = (char *)source;
		while (*stop)
			stop++;
		stop--;
		while (*start && ft_is_in_charset(*start, set))
			start++;
		while (source <= stop && ft_is_in_charset(*stop, set))
			stop--;
		size = (stop - start > 0) * (stop - start) + 1;
	}
	string = ft_managed_malloc(((size + 1) * sizeof(char)));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, start, size + 1);
	return (string);
}
