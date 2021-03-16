/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_set.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:06:59 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 15:53:45 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_associative_set(t_list **list, char *key, void *value)
{
	t_associative	*associative;

	associative = ft_lst_get_associative(*list, key);
	if (associative != NULL)
	{
		if (associative->value != NULL)
			ft_managed_free(associative->value);
	}
	else
	{
		associative = ft_managed_malloc(sizeof(t_associative));
		if (associative == NULL)
			return (NULL);
		associative->key = key;
		if (!(ft_lstnew_front(list, associative, ft_managed_free)))
			return (NULL);
	}
	associative->value = value;
	return (*list);
}
