/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_new_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:38:35 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:51:13 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_new_front(
	t_bidirectional_list **list,
	void *content,
	void (*del)(void *)
)
{
	t_bidirectional_list	*link;

	link = ft_blst_new(content);
	if (link == NULL)
	{
		del(content);
		ft_blst_clear(list, del);
		return (NULL);
	}
	ft_blst_add_front(list, link);
	return (link);
}
