/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_first.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:40:28 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/23 12:25:21 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_blst	ft_blst_first(t_bidirectional_list *list)
{
	t_bidirectional_list	*it;

	it = list;
	if (it == NULL)
		return (NULL);
	while (it->prev != NULL)
	{
		it = it->prev;
	}
	return (it);
}
