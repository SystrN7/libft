/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_del.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:49:10 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:30:44 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_associative_del(void *to_del)
{
	if (to_del == NULL)
		return ;
	if (((t_associative*)to_del)->value != NULL)
		ft_managed_free(((t_associative*)to_del)->value);
	ft_managed_free(to_del);
}
