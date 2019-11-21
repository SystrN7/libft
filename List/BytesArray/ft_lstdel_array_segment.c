/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel_array_segment.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/21 09:11:08 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/21 09:29:03 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_array_segment(void *to_del)
{
	if (to_del == NULL)
		return ;
	if (((t_bytes_array *)to_del)->array != NULL)
		free(((t_bytes_array *)to_del)->array);
	free(to_del);
}
