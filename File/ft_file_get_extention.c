/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_get_extention.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:30:31 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:13:15 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_file_get_extention(char *file_name)
{
	char	*last_dot;

	if (!(last_dot = ft_strrchr(file_name, '.')))
		return ("");
	if (!ft_strchr(last_dot, '/'))
		return (last_dot);
	return ("");
}
