/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_managed_debug.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:51:00 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/19 15:32:19 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MANAGED_DEBUG_H
# define FT_MANAGED_DEBUG_H

# include <stdio.h>

# define ft_managed_malloc(size) ft_debug_malloc(size, __FILE__, __FUNCTION__, __LINE__)
# define ft_managed_free ft_debug_free
# define ft_managed_free_all() ft_debug_show_unfree()

typedef struct s_malloc_list
{
	void					*address;
	unsigned int			size;
	const char				*filename;
	const char				*function;
	int						line;
	struct s_malloc_list	*next;
}				t_malloc_list;

static t_malloc_list	*g_malloc_list = NULL;

void	*ft_debug_malloc(
	size_t size,
	const char *filename,
	const char *function,
	const int line
);
void	ft_debug_free(void *address);
void	ft_debug_show_unfree(void);

#endif
