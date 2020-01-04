/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_vector.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 14:09:24 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/04 10:31:41 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

#include <math.h>

/*
**	Function : ft_get_vector
**	Decription : Convert an vector in dispalacement for x and y
**	Parameter :
**		-	(number) angle : Angle in radian
**		-	(number) magnitude : the magnitude of vector
**	Return (int)
**		-	(t_xz) : dispalacement for x and y for the vector
*/

t_xy	ft_get_vector(double angle, double magnitude)
{
	t_xy	vector;

	vector.x = ft_get_x_vector(angle, magnitude);
	vector.y = ft_get_y_vector(angle, magnitude);
	return (vector);
}

/*
**	Function : ft_get_x_vector
**	Decription : Convert an vector in dispalacement for x
**	Parameter :
**		-	(number) angle : Angle in radian
**		-	(number) magnitude : the magnitude of vector
**	Return (int)
**		-	(number) : dispalacement for x
*/

double	ft_get_x_vector(double angle, double magnitude)
{
	return (cos(angle) * magnitude);
}

/*
**	Function : ft_get_x_vector
**	Decription : Convert an vector in dispalacement for x
**	Parameter :
**		-	(number) angle : Angle in radian
**		-	(number) magnitude : the magnitude of vector
**	Return (int)
**		-	(number) : dispalacement for x
*/

double	ft_get_y_vector(double angle, double magnitude)
{
	return (sin(angle) * magnitude);
}
