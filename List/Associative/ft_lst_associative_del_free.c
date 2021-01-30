/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_del_free.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:37:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/30 16:17:28 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_associative_del_free(void *to_del)
{
	if (to_del == NULL)
		return ;
	if (((t_associative*)to_del)->value != NULL)
		ft_managed_free(((t_associative*)to_del)->value);
	ft_managed_free(to_del);
}
