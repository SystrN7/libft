/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/28 11:32:41 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/28 11:33:38 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *bytes_array, size_t array_size)
{
	char		*array_clone;
	size_t		i;

	i = 0;
	if (!(array_clone = malloc(array_size * sizeof(char))))
		return (NULL);
	while (i < array_size)
	{
		array_clone[i] = ((char *)bytes_array)[i];
		i++;
	}
	return (array_clone);
}
