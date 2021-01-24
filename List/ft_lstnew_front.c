/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:20:45 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:11:17 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_front(t_list **list, void *content, void (*del)(void *))
{
	t_list *link;

	if (!(link = ft_lstnew(content)))
	{
		del(content);
		ft_lstclear(list, del);
		return (NULL);
	}
	ft_lstadd_front(list, link);
	return (link);
}
