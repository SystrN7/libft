/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:38:10 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 16:45:26 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *string)
{
	size_t lenght;

	lenght = 0;
	while (string[lenght])
		lenght++;
	return (lenght);
}
