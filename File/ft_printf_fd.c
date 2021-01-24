/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:27:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:13:12 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

/*
**	Function : ft_printf
**	Description : This function do the same thing of prinft (libc)
**	Parametter :
**		-	(string) : The format of string to print
**		-	(*)line Varible to retrun the line
**	Return (int)
**		-	(size) : The number of printed char training '\0' exclude;
**		-	-1 : If an error occurred during the char printing ;
*/

int		ft_printf(const char *format, ...)
{
	va_list	args;
	char	*buffer;
	int		size;

	buffer = NULL;
	va_start(args, format);
	size = ft_format(format, args, &buffer);
	if (size < 0)
		size = -1;
	va_end(args);
	size += (size != 0) * -1;
	if (write(1, buffer, size) < 0)
		return (-1);
	free(buffer);
	return (size);
}

int		ft_printf_fd(int fd, const char *format, ...)
{
	va_list	args;
	char	*buffer;
	int		size;

	buffer = NULL;
	if (fd < 0)
		return (-1);
	va_start(args, format);
	size = ft_format(format, args, &buffer);
	if (size < 0)
		size = -1;
	va_end(args);
	size += (size != 0) * -1;
	if (write(fd, buffer, size) < 0)
		return (-1);
	free(buffer);
	return (size);
}
