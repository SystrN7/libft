/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:49:26 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:11:51 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (alst == NULL || new == NULL)
		return ;
	if (*alst != NULL)
	{
		lst = ft_lstlast(*alst);
		lst->next = new;
	}
	else
		*alst = new;
}
