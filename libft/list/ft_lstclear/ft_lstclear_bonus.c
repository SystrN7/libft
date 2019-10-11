/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 11:06:37 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 13:59:08 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *elem_to_del_next;
	t_list *elem_to_del;

	if (lst == NULL || *lst == NULL)
		return ;
	elem_to_del = (*lst)->next;
	ft_lstdelone((*lst), del);
	while (elem_to_del->next)
	{
		del(elem_to_del->content);
		elem_to_del_next = elem_to_del->next;
		free(elem_to_del);
		elem_to_del = elem_to_del_next;
	}
	del(elem_to_del->content);
	free(elem_to_del);
	(*lst)->next = NULL;
}
