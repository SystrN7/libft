/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_get.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:06:52 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/30 14:04:58 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_lst_associative_get
** Decription : return the value associative to key in the associative list
** Parameter :
** 	-	(list *) list :The address of the first element of associative list.
** 	-	(string) key of the element to search in the list
**
** Return (int)
** 	-	(void *) : value for given key
*/

void	*ft_lst_associative_get(const t_list *list, const char *key)
{
	return (ft_lst_get_associative(list, key)->value);
}
