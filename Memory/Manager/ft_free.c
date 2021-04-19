/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:32:01 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/19 15:24:05 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef DEBUG

static void	ft_managed_remove_link(
	t_list **list,
	t_list *link_del
)
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
		free(link_del->content);
		free(link_del);
		link_del = NULL;
	}
}

/*
** Function : ft_managed_free
** Decription : free of ptr allocated memory with wrapper.
** Parameter :
** 	- (void *) ptr to allocated memory
**
** Return (void) : nothing
*/

void	ft_managed_free(void *ptr)
{
	t_list	**lst_malloc;
	t_list	*it;

	if (ptr == NULL)
		return ;
	lst_malloc = ft_managed_get_malloc_list();
	it = *lst_malloc;
	while (it)
	{
		if (it->content == ptr)
			break ;
		it = it->next;
	}
	if (it != NULL)
		ft_managed_remove_link(lst_malloc, it);
}

/*
** Function : ft_managed_free_all
** Decription : free all allocated memory with wrapper.
*/

void	ft_managed_free_all(void)
{
	t_list	**lst_malloc;
	t_list	*it;
	t_list	*remove_link;

	lst_malloc = ft_managed_get_malloc_list();
	it = *lst_malloc;
	while (it)
	{
		remove_link = it;
		it = it->next;
		free(remove_link->content);
		remove_link->content = NULL;
		remove_link->next = NULL;
		free(remove_link);
	}
	*lst_malloc = NULL;
}

#endif
