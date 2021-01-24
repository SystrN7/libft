/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_link.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:33:35 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 13:33:37 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_lstremove_link
** Decription : Removes a link from the list without breaking its continuity
** Parameter :
** 	- (t_list** list) list containing the element to del
**  - (t_list* link) link to delete
**  - (t_list *) function to delete de link content
**
** Return (void) : nothing
*/

void	ft_lstremove_link(t_list **list, t_list *link_del, void (*del)(void*))
{
	t_list	*list_it;
	t_list	*link_befor_del;

	if (list == NULL || *list == NULL || link_del == NULL)
		return ;
	list_it = *list;
	link_befor_del = NULL;
	while (list_it != link_del)
	{
		link_befor_del = list_it;
		list_it = list_it->next;
	}
	if (list_it == link_del)
	{
		if (*list == list_it)
			*list = (*list)->next;
		if (list_it->next != NULL && link_befor_del != NULL)
			link_befor_del->next = list_it->next;
		else if (link_befor_del != NULL)
			link_befor_del->next = NULL;
		ft_lstdel_link(link_del, del);
		link_del = NULL;
	}
}
