/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_remove.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:24:29 by fgalaup           #+#    #+#             */
/*   Updated: 2021/02/03 15:18:41 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_lst_associative_remove(t_list **list, char *key, void (*del)(void *))
{
	t_list			*link;

	if (!list || !(*list))
		return (FALSE);
	link = ft_lst_get_associative_link(*list, key);
	if (link)
	{
		if (del == NULL)
			del = &ft_lst_associative_del_free;
		ft_lstremove_link(list, link, del);
		return (TRUE);
	}
	return (FALSE);
}
