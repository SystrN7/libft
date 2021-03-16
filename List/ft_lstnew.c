/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:18:21 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:08:57 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*link;

	link = ft_managed_malloc(sizeof(t_list));
	if (link == NULL)
		return (NULL);
	link->content = content;
	link->next = NULL;
	return (link);
}
