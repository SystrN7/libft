/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_link.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:59:10 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:30:36 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_link(t_list *link, void (*del)(void*))
{
	if (link == NULL || link->content == NULL)
		return ;
	if (del != NULL)
		del(link->content);
	ft_managed_free(link);
	link = NULL;
}
