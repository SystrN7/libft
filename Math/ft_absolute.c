/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:50:51 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:10:24 by fgalaup          ###   ########lyon.fr   */
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
	return ((number < 0) ? -number : number);
}

/*
**	Function : ft_absl
**	Alias : ft_absolute_ll
*/

size_t	ft_abs(long long number)
{
	return ((number < 0) ? -number : number);
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
	return ((number < 0) ? -number : number);
}

/*
**	Function : ft_absf
**	Alias : ft_absolute_f
*/

double	ft_absf(double number)
{
	return ((number < 0) ? -number : number);
}
