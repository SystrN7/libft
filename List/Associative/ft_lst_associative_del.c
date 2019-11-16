/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_associative_del.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/15 14:49:10 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 14:43:46 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_associative_del(void *to_del, void (*del)(void *))
{
	if (((t_associative*)to_del)->value != NULL)
		del(((t_associative*)to_del)->value);
	free(to_del);
}
