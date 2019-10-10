/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:39:07 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:09:32 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void		*str_clone;
	size_t		str_lenght;

	str_lenght = ft_strlen(s1);
	if (!(str_clone = malloc(str_lenght + 1)))
		return (NULL);
	ft_strlcpy(str_clone, s1, str_lenght + 1);
	return (str_clone);
}