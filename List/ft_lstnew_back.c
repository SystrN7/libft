/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew_back.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/07 15:20:45 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 15:51:26 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_back(t_list **list, void *content, void (*del)(void *))
{
	t_list *link;

	if (!(link = ft_lstnew(content)))
	{
		del(content);
		ft_lstclear(list, del);
		return (NULL);
	}
	ft_lstadd_back(list, link);
	return (link);
}
