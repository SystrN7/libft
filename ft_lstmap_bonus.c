/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 11:25:54 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 13:49:00 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*new_list;
	t_list	*new_list_elem;

	new_list = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		new_list_elem = ft_lstnew(f(lst->content));
		ft_lstadd_back(&new_list, new_list_elem);
		lst = lst->next;
	}
	new_list_elem = ft_lstnew(f(lst->content));
	ft_lstadd_back(&new_list, new_list_elem);
	return (new_list);
}
