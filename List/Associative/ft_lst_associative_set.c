/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_associative_set.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:06:59 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:27:18 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_associative_set(t_list **list, char *key, void *value)
{
	t_associative	*associative;

	if ((associative = ft_lst_get_associative(*list, key)))
	{
		if (associative->value != NULL)
			ft_managed_free(associative->value);
	}
	else
	{
		if ((associative = ft_managed_malloc(sizeof(t_associative))))
		{
			associative->key = key;
			if (!(ft_lstnew_front(list, associative, ft_managed_free)))
				return (NULL);
		}
		else
			return (NULL);
	}
	associative->value = value;
	return (*list);
}
