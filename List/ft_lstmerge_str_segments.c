/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmerge_str_segments.c                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 10:17:00 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/11 10:25:22 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lstmerge_str_segments(t_list *segments)
{
	t_list	*it;
	char	*str;
	size_t	segments_size;
	size_t	i;
	size_t	y;

	segments_size = 0;
	it = segments;
	while (it)
	{
		segments_size += ft_strlen(it->content);
		it = it->next;
	}
	if (!(str = (char *)malloc((segments_size + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (segments)
	{
		y = ft_strlen(it->content);
		ft_memcpy(str + i, it->content, y);
		i += y;
	}
	str[segments_size] = '\0';
	return (str);
}
