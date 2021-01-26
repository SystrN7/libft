/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:32:01 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/26 13:03:35 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		ft_lstremove_link(lst_malloc, it, free);
	else
		free(ptr);
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
