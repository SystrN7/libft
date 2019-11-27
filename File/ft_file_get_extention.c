/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_file_get_extention.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/27 13:30:31 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:15:12 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_file_get_extention(char *file_name)
{
	char	*last_dot;

	last_dot = ft_strrchr(file_name, '.');
	if (!ft_strchr(last_dot, '/'))
		return (last_dot);
	return ("");
}
