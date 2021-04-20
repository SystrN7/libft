/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:40:28 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:33:52 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_last(t_bidirectional_list *list)
{
	t_bidirectional_list	*it;

	it = list;
	while (it->next != NULL)
	{
		it = it->next;
	}
	return (it);
}
