/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 12:41:58 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 16:10:36 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

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

char				**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	sub_str_lenght;
	unsigned int	i;

	i = 0;
	if (!(tab = malloc((ft_count_delimited(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
		if (*s != c)
		{
			sub_str_lenght = 0;
			while (*s != c && *s)
			{
				sub_str_lenght++;
				s++;
			}
			if (!(tab[i] = (char *)malloc((sub_str_lenght + 1) * sizeof(char))))
				return (NULL);
			ft_strlcpy(tab[i++], s - sub_str_lenght, (sub_str_lenght + 1));
		}
		else
			s++;
	tab[i] = NULL;
	return (tab);
}
