/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:21:35 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:13:05 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(int fd, char *s)
{
	if (s != NULL && fd >= 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
