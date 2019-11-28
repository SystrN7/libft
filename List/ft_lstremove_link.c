/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstremove_link.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/07 15:33:35 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/28 13:05:36 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

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
