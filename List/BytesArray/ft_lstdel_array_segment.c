/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_array_segment.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 09:11:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:30:57 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_array_segment(void *to_del)
{
	if (to_del == NULL)
		return ;
	if (((t_bytes_array *)to_del)->array != NULL)
		ft_managed_free(((t_bytes_array *)to_del)->array);
	ft_managed_free(to_del);
}
