/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_remove_link.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:58:14 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:58:33 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	ft_blst_remove_link(
	t_bidirectional_list **list,
	t_bidirectional_list *link,
	void (*del)(void*)
)
{
	if (list == NULL || link == NULL || del == NULL)
		return ;
	if (*list == link)
	{
		if (link->next)
			*list = link->next;
		else if (link->prev)
			*list = link->prev;
		else
			*list = NULL;
	}
	if (link->next)
		link->next->prev = link->prev;
	if (link->prev)
		link->prev->next = link->next;
	link->next = NULL;
	link->prev = NULL;
	del(link);
}
