/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:50:51 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 17:02:46 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function : ft_absolute_ll
**	Decription : Return the absolute value for long long
**	Parameter :
**		-	(number) number : input signed number
**	Return (int)
**		-	(number) : Positive number
*/

size_t	ft_absolute_ll(long number)
{
	if (number < 0)
		number = -number;
	return (number);
}

/*
**	Function : ft_absl
**	Alias : ft_absolute_ll
*/

size_t	ft_abs(long long number)
{
	if (number < 0)
		number = -number;
	return (number);
}

/*
**	Function : ft_absolute_f
**	Decription : Return the absolute value for double
**	Parameter :
**		-	(number) number : input signed number
**	Return (int)
**		-	(number) : Positive number
*/

double	ft_absolute_f(double number)
{
	if (number < 0)
		number = -number;
	return (number);
}

/*
**	Function : ft_absf
**	Alias : ft_absolute_f
*/

double	ft_absf(double number)
{
	if (number < 0)
		number = -number;
	return (number);
}
