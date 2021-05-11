/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_insert_link.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:22:07 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/11 14:46:27 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_insert_link_after(
	t_bidirectional_list **list,
	t_bidirectional_list *link
)
{
	if (list == NULL || link == NULL)
		return (NULL);
	if (*list == NULL)
		return (*list = link);
	link->next = (*list)->next;
	link->prev = (*list);
	if ((*list)->next != NULL)
		(*list)->next->prev = link;
	(*list)->next = link;
	(*list) = link;
	return (link);
}

t_blst	ft_blst_insert_link_before(
	t_bidirectional_list **list,
	t_bidirectional_list *link
)
{
	if (list == NULL || link == NULL)
		return (NULL);
	if (*list == NULL)
		return (*list = link);
	link->next = (*list);
	link->prev = (*list)->prev;
	if ((*list)->prev != NULL)
		(*list)->prev->next = link;
	(*list)->prev = link;
	(*list) = link;
	return (link);
}
