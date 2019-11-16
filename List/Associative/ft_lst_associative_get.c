/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_associative_get.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 13:06:52 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 14:40:26 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
