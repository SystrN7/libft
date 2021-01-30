/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_del.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:49:10 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/30 16:20:06 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_associative_del(t_associative *to_del, void (*del)(void *))
{
	if (to_del == NULL)
		return ;
	if ((to_del->value != NULL) && (del))
		del(to_del->value);
	ft_managed_free(to_del);
}
