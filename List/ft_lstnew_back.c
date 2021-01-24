/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:20:45 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:11:21 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_back(t_list **list, void *content, void (*del)(void *))
{
	t_list *link;

	if (!(link = ft_lstnew(content)))
	{
		del(content);
		ft_lstclear(list, del);
		return (NULL);
	}
	ft_lstadd_back(list, link);
	return (link);
}
