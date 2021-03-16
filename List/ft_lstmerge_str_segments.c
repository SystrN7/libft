/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge_str_segments.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:17:00 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:19:18 by felix            ###   ########lyon.fr   */
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
	str = ft_calloc((segments_size + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (segments)
	{
		y = ft_strlen(segments->content);
		ft_memcpy(str + i, segments->content, y);
		i += y;
		segments = segments->next;
	}
	return (str);
}
