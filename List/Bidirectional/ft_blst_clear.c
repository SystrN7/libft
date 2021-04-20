/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:52:11 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:56:38 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_blst_clear(t_bidirectional_list **list, void (*del)(void*))
{
	t_bidirectional_list	*link_to_del_next;
	t_bidirectional_list	*link_to_del;

	if (list == NULL || *list == NULL)
		return ;
	link_to_del = (*list);
	while (link_to_del)
	{
		link_to_del_next = link_to_del->next;
		ft_blst_delete_link(link_to_del, del);
		link_to_del = link_to_del_next;
	}
	*list = NULL;
}
