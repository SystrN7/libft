/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:32:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 16:35:27 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_managed_get_malloc_list
** Decription : Return the frist list link of registred memory allocation.
** Return (t_list **) : first link of registred memory allocation.
*/

t_list			**ft_managed_get_malloc_list(void)
{
	static t_list *first = NULL;

	return (&first);
}

t_ftermination	ft_managed_termination_function(t_ftermination f)
{
	static t_ftermination termination_function = NULL;

	if (f != NULL)
		termination_function = f;
	return (termination_function);
}
