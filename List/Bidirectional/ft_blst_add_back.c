/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:11:20 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:34:45 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_add_back(
	t_bidirectional_list **list,
	t_bidirectional_list *link
)
{
	if (list == NULL || link == NULL)
		return (NULL);
	if (*list == NULL)
		return (*list = link);
	*list = ft_blst_last(*list);
	(*list)->next = link;
	link->prev = (*list);
	*list = link;
	return (link);
}
