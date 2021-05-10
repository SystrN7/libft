/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blst_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:49:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/05/07 14:52:35 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_blst_swap(t_bidirectional_list *link_a, t_bidirectional_list *link_b)
{
	void	*tmp;

	tmp = link_a->content;
	link_a->content = link_b->content;
	link_b->content = tmp;
}
