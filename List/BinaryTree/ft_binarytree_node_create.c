/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binarytree_node_create.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:33:52 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 15:56:32 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bnode	*ft_binarytree_node_create(void *value)
{
	t_node_binary	*node;

	node = ft_managed_malloc(sizeof(t_node_binary));
	if (node == NULL)
		return (NULL);
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
