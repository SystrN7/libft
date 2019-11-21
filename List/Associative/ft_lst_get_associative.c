/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_get_associative.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/20 14:09:27 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 14:11:02 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
