/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_sort.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 10:43:19 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 15:29:54 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_lst_sort
** Decription : Sort list with function is_sort
** Parameter :
** 	-	(list *) list :The address of the first element of list.
** 	-	(function) is_sort : This function need to returns true in the case
** 		the elements are sorted false in the other case.
**
** Return (int)
** 	-	(t_xz) : The first element of list
*/

t_list	*ft_lst_sort(t_list *list, t_boolean (*is_sort)(void *, void *))
{
	t_list	*it;
	void	*tmp;

	it = list;
	while (it->next)
	{
		if (is_sort(it->content, it->next->content))
		{
			tmp = it->content;
			it->content = it->next->content;
			it->next->content = tmp;
			it = list;
		}
		else
			it = it->next;
	}
	return (list);
}
