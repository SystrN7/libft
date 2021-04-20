/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_delete_link.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:59:15 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:50:25 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_blst_delete_link(t_bidirectional_list *link, void (*del)(void*))
{
	if (link == NULL)
		return ;
	if (del != NULL)
		del(link->content);
	link->next = NULL;
	link->prev = NULL;
	ft_managed_free(link);
	link = NULL;
}
