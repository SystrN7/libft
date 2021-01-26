/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge_str_segments.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:17:00 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:26:07 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lstmerge_str_segments(t_list *segments)
{
	t_list	*it;
	char	*str;
	size_t	segments_size;
	size_t	i;
	size_t	y;

	segments_size = 0;
	it = segments;
	while (it)
	{
		segments_size += ft_strlen(it->content);
		it = it->next;
	}
	if (!(str = (char *)ft_managed_malloc((segments_size + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (segments)
	{
		y = ft_strlen(segments->content);
		ft_memcpy(str + i, segments->content, y);
		i += y;
		segments = segments->next;
	}
	str[segments_size] = '\0';
	return (str);
}
