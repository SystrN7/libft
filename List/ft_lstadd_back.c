/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 10:49:26 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 15:32:43 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (alst == NULL || new == NULL)
		return ;
	if (*alst != NULL)
	{
		lst = ft_lstlast(*alst);
		lst->next = new;
	}
	else
		*alst = new;
}
