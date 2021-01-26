/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:41:58 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/25 10:33:18 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_delimited(char const *string, char c)
{
	char			prev_is_del;
	unsigned int	seg_count;
	unsigned int	i;

	i = 0;
	seg_count = 0;
	prev_is_del = -1;
	while (string[i])
		if (string[i++] == c)
		{
			seg_count += (prev_is_del == 0 && i != 0) ? 1 : 0;
			prev_is_del = 1;
		}
		else
			prev_is_del = 0;
	seg_count += (prev_is_del == 0) ? 1 : 0;
	return (seg_count);
}

static char			**ft_split_core(char ***tab, char const *s, char c)
{
	unsigned int	sub_str_lenght;
	unsigned int	i;

	i = 0;
	if (!(*tab = ft_calloc((ft_count_delimited(s, c) + 1), sizeof(char *))))
		return (NULL);
	while (s != NULL && *s)
		if (*s != c)
		{
			sub_str_lenght = 0;
			while (*s != c && *s)
			{
				sub_str_lenght++;
				s++;
			}
			if (!((*tab)[i] = ft_managed_malloc((sub_str_lenght + 1))))
				return (NULL);
			ft_strlcpy((*tab)[i++], s - sub_str_lenght, (sub_str_lenght + 1));
		}
		else
			s++;
	(*tab)[i] = NULL;
	return (*tab);
}

char				**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	tab = NULL;
	if (ft_split_core(&tab, s, c) == NULL)
	{
		if (tab != NULL)
		{
			i = 0;
			while (tab[i] != NULL || tab[i] != 0)
				ft_managed_free(tab[i++]);
			ft_managed_free(tab);
		}
		return (NULL);
	}
	return (tab);
}
