/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_debug.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:15:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/19 15:34:42 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function : ft_debug_malloc
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

void	*ft_debug_malloc(
	size_t size,
	const char *filename,
	const char *function,
	const int line
)
{
	t_malloc_list	*link;
	void			*address;

	link = malloc(sizeof(t_malloc_list));
	address = malloc(size);
	if (address == NULL || link == NULL)
	{
		ft_debug_show_unfree();
		ft_printf_fd(standard_error,
			"FATAL : You program can't alloc '%ul' Bytes", size);
		exit (1);
	}
	link->address = address;
	link->filename = filename;
	link->function = function;
	link->line = line;
	link->size = size;
	link->next = g_malloc_list;
	g_malloc_list = link;
	return (address);
}

static void	ft_debug_remove_link(
	t_malloc_list **list,
	t_malloc_list *link_del
)
{
	t_malloc_list	*list_it;
	t_malloc_list	*link_befor_del;

	if (list == NULL || *list == NULL || link_del == NULL)
		return ;
	list_it = *list;
	link_befor_del = NULL;
	while (list_it != link_del)
	{
		link_befor_del = list_it;
		list_it = list_it->next;
	}
	if (list_it == link_del)
	{
		if (*list == list_it)
			*list = (*list)->next;
		if (list_it->next != NULL && link_befor_del != NULL)
			link_befor_del->next = list_it->next;
		else if (link_befor_del != NULL)
			link_befor_del->next = NULL;
		free(link_del->address);
		free(link_del);
		link_del = NULL;
	}
}

/*
** Function : ft_managed_free
** Decription : free of ptr allocated memory with wrapper.
** Parameter :
** 	- (void *) ptr to allocated memory
**
** Return (void) : nothing
*/

void	ft_debug_free(void *ptr)
{
	t_malloc_list	*it;

	if (ptr == NULL)
		return ;
	it = g_malloc_list;
	while (it)
	{
		if (it->address == ptr)
			break ;
		it = it->next;
	}
	if (it != NULL)
		ft_debug_remove_link(&g_malloc_list, it);
}

void	ft_debug_show_unfree(void)
{
	t_malloc_list	*it;
	size_t			number_of_leaks;
	size_t			total_of_memory_leak;

	number_of_leaks = 0;
	total_of_memory_leak = 0;
	it = g_malloc_list;
	if (g_malloc_list)
		printf("Leaks detected :\n");
	while (it)
	{
		printf(
			"\t - Unfree Memory of [%p] - %4i bytes : @%-30s:line:%-5d - %s\n",
			it->address,
			it->size,
			it->function,
			it->line,
			it->filename);
		number_of_leaks++;
		total_of_memory_leak += it->size;
		it = it->next;
	}
	if (g_malloc_list)
		printf("Total : %lu bytes lost for %lu allocation\n",
			total_of_memory_leak, number_of_leaks);
}
