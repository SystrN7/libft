/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:15:28 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/26 11:24:26 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_malloc
** Decription : This function is a wrapper of libc malloc
** is add additional feature :
**  - Free all allocated element if malloc can't be allocating asked memory.
**  - Register allocated element in chained list
** Parameter :
** 	- (size_t) the size of the memory requested in bytes
**
** Return (void *) :
**  - return the address of the frist byte of requested memory.
**  - NULL in case the system cannot allocate the memory.
*/

void	*ft_managed_malloc(size_t size)
{
	t_ftermination	termination_function;
	t_list			**lst_malloc;
	t_list			*link;
	void			*ptr;

	lst_malloc = ft_managed_get_malloc_list();
	ptr = malloc(size);
	if (ptr == NULL || !(link = malloc(sizeof(t_list))))
	{
		if ((termination_function = ft_managed_termination_function(NULL)))
			termination_function(NULL);
		ft_managed_free_all();
		return (NULL);
	}
	link->content = ptr;
	link->next = NULL;
	ft_lstadd_front(lst_malloc, link);
	return (ptr);
}
