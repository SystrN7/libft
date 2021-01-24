/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_link.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:59:10 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:11:41 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_link(t_list *link, void (*del)(void*))
{
	if (link == NULL || link->content == NULL)
		return ;
	if (del != NULL)
		del(link->content);
	free(link);
	link = NULL;
}
