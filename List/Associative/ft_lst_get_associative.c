/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_associative.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:09:27 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:10:51 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_get_associative(const t_list *list, char *key)
{
	t_list			*it;
	t_associative	*element;

	it = (t_list*)list;
	while (it)
	{
		element = (t_associative*)it->content;
		if (!ft_strncmp(key, element->key, 76))
			return (element);
		it = it->next;
	}
	return (NULL);
}
