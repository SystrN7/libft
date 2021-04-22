/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_remove.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:24:29 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/22 17:25:48 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_lst_associative_remove(t_list **list, char *key, void (*del)(void *))
{
	t_list			*link;

	if (!list || !(*list))
		return (FT_FALSE);
	link = ft_lst_get_associative_link(*list, key);
	if (link)
	{
		if (del == NULL)
			del = &ft_lst_associative_del_free;
		ft_lstremove_link(list, link, del);
		return (FT_TRUE);
	}
	return (FT_FALSE);
}
