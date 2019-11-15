/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_associative_set.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 13:06:59 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 15:11:17 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_associative_set(t_list **list, char *key, void *new_value)
{
	t_associative	*associative;

	if ((associative = ft_lst_associative_get(*list, key)))
	{
		if (associative->value != NULL)
			free(associative->value);
		associative->value = new_value;
		return (associative->value);
	}
	else
	{
		if ((associative = malloc(sizeof(t_associative))))
			ft_lstnew_front(list, associative, ft_lst_associative_del);
		else
			return (NULL);
	}
	return (*list);
}
