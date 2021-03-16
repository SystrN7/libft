/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:20:45 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:09:19 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_back(t_list **list, void *content, void (*del)(void *))
{
	t_list	*link;

	link = ft_lstnew(content);
	if (link == NULL)
	{
		del(content);
		ft_lstclear(list, del);
		return (NULL);
	}
	ft_lstadd_back(list, link);
	return (link);
}
