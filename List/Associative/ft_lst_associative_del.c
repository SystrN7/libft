/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_del.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:49:10 by fgalaup           #+#    #+#             */
/*   Updated: 2021/02/01 12:02:53 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_lst_associative_del
** Decription : Free memory of key, value and associative structure.
** Parameter :
** 	-	(t_associative *) address of associative stucture.
** 	-	(void (*del)(void *)) function for free value;
**
** Return (void)
*/

void	ft_lst_associative_del(t_associative *to_del, void (*del)(void *))
{
	if (to_del == NULL)
		return ;
	if (to_del->key)
		ft_managed_free(to_del->key);
	if ((to_del->value != NULL) && (del))
		del(to_del->value);
	to_del->key = NULL;
	to_del->value = NULL;
	ft_managed_free(to_del);
}
