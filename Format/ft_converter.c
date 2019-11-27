/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_converter.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/06 08:27:45 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 15:58:16 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_format.h"

t_format_converter	*ft_modular_converter(void)
{
	static t_format_converter converters[10];

	converters[0].indicator = "%";
	converters[1].indicator = "c";
	converters[2].indicator = "s";
	converters[3].indicator = "p";
	converters[4].indicator = "d";
	converters[5].indicator = "i";
	converters[6].indicator = "u";
	converters[7].indicator = "x";
	converters[8].indicator = "X";
	converters[9].indicator = NULL;
	converters[0].ft_converter = converter_percent;
	converters[1].ft_converter = converter_char;
	converters[2].ft_converter = converter_string;
	converters[3].ft_converter = converter_pointer;
	converters[4].ft_converter = converter_integer;
	converters[5].ft_converter = converter_integer;
	converters[6].ft_converter = converter_unsigned;
	converters[7].ft_converter = converter_hexa_lower;
	converters[8].ft_converter = converter_hexa_upper;
	return (converters);
}
