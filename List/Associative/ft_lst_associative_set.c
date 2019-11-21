/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_associative_set.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 13:06:59 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 14:11:08 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

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
