/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_associative_link.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:25:40 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/30 17:00:55 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_lst_get_associative_link
** Decription : search in associative list the link
** with the same key given to the function
** and return the pointer to link contain associative structure.
** Parameter :
** 	-	(list *) list :The address of the first element of associative list.
** 	-	(string) key of the element to search in the list
**
** Return (int)
** 	-	(t_list *) : The link of the associative
*/

t_list	*ft_lst_get_associative_link(const t_list *list, const char *key)
{
	t_list			*it;

	it = (t_list*)list;
	while (it)
	{
		if (key == ((t_associative*)it->content)->key)
			return (it);
		if (!ft_strncmp(key, ((t_associative*)it->content)->key, 72))
			return (it);
		it = it->next;
	}
	return (NULL);
}
