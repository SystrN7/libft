/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:06:37 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:11:45 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *elem_to_del_next;
	t_list *elem_to_del;

	if (lst == NULL || *lst == NULL)
		return ;
	elem_to_del = (*lst);
	while (elem_to_del)
	{
		elem_to_del_next = elem_to_del->next;
		ft_lstdel_link((elem_to_del), del);
		elem_to_del = elem_to_del_next;
	}
	*lst = NULL;
}
