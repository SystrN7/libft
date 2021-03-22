/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_del_free.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:37:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/21 15:41:29 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_associative_del_free(void *to_del)
{
	if (to_del == NULL)
		return ;
	if (((t_associative *)to_del)->key)
		ft_managed_free(((t_associative *)to_del)->key);
	if (((t_associative *)to_del)->value != NULL)
		ft_managed_free(((t_associative *)to_del)->value);
	((t_associative *)to_del)->key = NULL;
	((t_associative *)to_del)->value = NULL;
	ft_managed_free(to_del);
}
