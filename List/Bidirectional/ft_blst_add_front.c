/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:52:01 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:34:51 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_add_front(
	t_bidirectional_list **list,
	t_bidirectional_list *link
)
{
	if (list == NULL || link == NULL)
		return (NULL);
	if (*list == NULL)
		return (*list = link);
	*list = ft_blst_first(*list);
	link->next = *list;
	(*list)->prev = link;
	*list = link;
	return (link);
}
