/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_get_extention.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:30:31 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 11:43:18 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_file_get_extention(char *file_name)
{
	char	*last_dot;

	last_dot = ft_strrchr(file_name, '.');
	if (!(last_dot))
		return ("");
	if (!ft_strchr(last_dot, '/'))
		return (last_dot);
	return ("");
}
