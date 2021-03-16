/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:23:12 by felix             #+#    #+#             */
/*   Updated: 2021/03/16 14:47:04 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_tern_pt(t_bool condition, void *pt1, void *pt2)
{
	if (condition)
		return (pt1);
	return (pt2);
}

int	ft_tern_nu(t_bool condition, int value1, int value2)
{
	if (condition)
		return (value1);
	return (value2);
}
