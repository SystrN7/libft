/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_angle.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 13:58:59 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 15:29:32 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

/*
**	Function : ft_degree_to_radian
**	Decription : Convert an angle in degrees to an angle in radians
**	the angle is always between 0 and 2pi
**	Parameter :
**		-	(number) angle : Angle in degree
**	Return (int)
**		-	(number) agnle : Angle in radian
*/

double	ft_degree_to_radian(double angle)
{
	return (fmod(angle / 180.0 * (PI), (2.0 * (PI))));
}

/*
**	Function : ft_radian_to_degree
**	Decription : Convert an angle in radians to an angle in degrees
**	the angle is always between 0 and 360
**	Parameter :
**		-	(number) angle : Angle in radian
**	Return (int)
**		-	(number) agnle : Angle in degree
*/

double	ft_radian_to_degree(double angle)
{
	return (fmod(angle / (PI) * 180.0, 360.0));
}
