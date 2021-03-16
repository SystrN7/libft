/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:37:11 by felix             #+#    #+#             */
/*   Updated: 2021/03/16 15:19:26 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fuck the norm
void	*ftn(void **dest, void *src)
{
	*dest = src;
	return (dest);
}

// Fuck the paris
int	fti(int *dest, int src)
{
	*dest = src;
	return (*dest);
}
