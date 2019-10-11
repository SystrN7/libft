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

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list	**first_list_elem;

	if (lst == NULL)
		return (NULL);
	first_list_elem = f(lst);
	while (lst->next)
	{
		lst = lst->next;
		ft_lstadd_back(first_list_elem, f(lst));
	}
}
