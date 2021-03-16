/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:25:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:39:30 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (0 == 0)
	{
		if (s[i] == (char)c)
			last = (char *)(s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (last);
}
