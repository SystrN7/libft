/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel_link.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 10:59:10 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 15:41:07 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_link(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || lst->content == NULL)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
