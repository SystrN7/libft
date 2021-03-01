/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_associative.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:09:27 by fgalaup           #+#    #+#             */
/*   Updated: 2021/02/17 11:52:15 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_lst_get_associative
** Decription : search in associative list the link
** with the same key given to the function
** and return the pointer to the find associative stucture.
** Parameter :
** 	-	(list *) list :The address of the first element of associative list.
** 	-	(string) key of the element to search in the list
**
** Return (int)
** 	-	(t_associative *) : content of t_list
*/

t_associative	*ft_lst_get_associative(const t_list *list, const char *key)
{
	t_list	*link;

	link = ft_lst_get_associative_link(list, key);
	if (link != NULL)
		return (link->content);
	return (NULL);
}
