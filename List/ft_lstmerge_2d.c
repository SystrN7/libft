/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmerge_2d.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 13:36:24 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/07 11:03:41 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lstmerge_2d(t_list *list)
{
	void	**returned;
	size_t	first_size;
	size_t	i;
	t_list	*it;

	first_size = 0;
	it = list;
	while (it)
	{
		if (it->content != NULL)
			first_size++;
		it = it->next;
	}
	if (!(returned = malloc((first_size + 1) * sizeof(void *))))
		return (NULL);
	i = 0;
	it = list;
	while (it)
	{
		if (it->content != NULL)
			returned[i++] = it->content;
		it = it->next;
	}
	returned[i] = NULL;
	return (returned);
}
