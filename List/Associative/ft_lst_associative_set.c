/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_associative_set.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 13:06:59 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 15:52:19 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_lst_get_associative(const t_list *list, char *key)
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

t_list		*ft_lst_associative_set(t_list **list, char *key, void *value)
{
	t_associative	*associative;

	if ((associative = ft_lst_get_associative(*list, key)))
	{
		if (associative->value != NULL)
			free(associative->value);
	}
	else
	{
		if ((associative = malloc(sizeof(t_associative))))
		{
			associative->key = key;
			if (!(ft_lstnew_front(list, associative, free)))
				return (NULL);
		}
		else
			return (NULL);
	}
	associative->value = value;
	return (*list);
}
