/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:21:47 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/11 14:57:08 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_blst_move_before(
	t_bidirectional_list **link,
	t_bidirectional_list **dest_list
)
{
	t_bidirectional_list	*link_to_move;

	if (link == NULL || *link == NULL || dest_list == NULL)
		return ;
	link_to_move = *link;
	if (link_to_move->next != NULL)
		link_to_move->next->prev = link_to_move->prev;
	if (link_to_move->prev != NULL)
		link_to_move->prev->next = link_to_move->next;
	if ((*link)->prev != NULL)
		*link = (*link)->prev;
	else if ((*link)->next != NULL)
		*link = (*link)->next;
	else
		*link = NULL;
	link_to_move->next = NULL;
	link_to_move->prev = NULL;
	ft_blst_insert_link_before(dest_list, link_to_move);
}
