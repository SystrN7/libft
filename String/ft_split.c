/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:41:58 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 16:49:20 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_delimited(char const *string, char c)
{
	char			prev_is_delimiter;
	unsigned int	seg_count;
	unsigned int	i;

	i = 0;
	seg_count = 0;
	prev_is_delimiter = -1;
	while (string[i])
	{
		if (string[i++] == c)
		{
			seg_count += (prev_is_delimiter == 0 && i != 0);
			prev_is_delimiter = 1;
		}
		else
			prev_is_delimiter = 0;
	}
	seg_count += (prev_is_delimiter == 0);
	return (seg_count);
}

static char	**ft_split_core(char ***array, char const *string, char c)
{
	unsigned int	sub_str_lenght;
	unsigned int	i;

	i = 0;
	while (string != NULL && *string)
	{
		if (*string != c)
		{
			sub_str_lenght = 0;
			while (*string != c && *string)
			{
				sub_str_lenght++;
				string++;
			}
			(*array)[i] = ft_managed_malloc((sub_str_lenght + 1));
			if ((*array)[i] == NULL)
				return (NULL);
			ft_strlcpy((*array)[i++], string - sub_str_lenght,
				(sub_str_lenght + 1));
		}
		else
			string++;
	}
	(*array)[i] = NULL;
	return (*array);
}

char	**ft_split(char const *string, char c)
{
	char	**array;
	int		i;

	array = ft_calloc((ft_count_delimited(string, c) + 1), sizeof(char *));
	if (!array)
		return (NULL);
	if (ft_split_core(&array, string, c) == NULL)
	{
		i = 0;
		while (array[i] != NULL || array[i] != 0)
			ft_managed_free(array[i++]);
		ft_managed_free(array);
		return (NULL);
	}
	return (array);
}
