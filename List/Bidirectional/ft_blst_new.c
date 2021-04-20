/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:40:39 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:29:32 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_new(void *content)
{
	t_bidirectional_list	*link;

	link = ft_managed_malloc(sizeof(t_bidirectional_list));
	if (link == NULL)
		return (NULL);
	link->content = content;
	link->next = NULL;
	link->prev = NULL;
	return (link);
}
