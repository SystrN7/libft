/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge_2d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:36:24 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:20:20 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lstmerge_2d(t_list *list)
{
	void	**returned;
	size_t	size;
	size_t	i;
	t_list	*it;

	size = ft_lstsize(list);
	returned = ft_managed_malloc((size + 1) * sizeof(void *));
	if (returned == NULL)
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
