/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_angle.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 13:58:59 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 09:00:01 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function : ft_degree_to_radian
**	Decription : Convert an angle in degrees to an angle in radians
**	Parameter :
**		-	(number) angle : Angle in degree
**	Return (int)
**		-	(number) agnle : Angle in radian
*/

double	ft_degree_to_radian(double angle)
{
	return (angle / 180 * (PI));
}

/*
**	Function : ft_radian_to_degree
**	Decription : Convert an angle in radians to an angle in degrees
**	Parameter :
**		-	(number) angle : Angle in radian
**	Return (int)
**		-	(number) agnle : Angle in degree
*/

double	ft_radian_to_degree(double angle)
{
	return (angle / (PI) * 180);
}
