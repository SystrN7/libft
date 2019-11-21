/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel_link.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 10:59:10 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 11:49:11 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_link(t_list *link, void (*del)(void*))
{
	if (link == NULL || link->content == NULL)
		return ;
	if (del != NULL)
		del(link->content);
	free(link);
	link = NULL;
}
