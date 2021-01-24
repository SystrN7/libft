/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_get.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:06:52 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:11:02 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_associative_get(const t_list *list, char *key)
{
	t_list			*it;
	t_associative	*element;

	it = (t_list*)list;
	while (it)
	{
		element = (t_associative*)it->content;
		if (!ft_strncmp(key, element->key, 76))
			return (element->value);
		it = it->next;
	}
	return (NULL);
}
