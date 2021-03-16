/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_type.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 08:58:08 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/05 12:19:56 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FORMAT_TYPE_H
# define FT_FORMAT_TYPE_H

# include "ft_format.h"
# include <stdarg.h>

typedef t_bytes_array	t_ba;
typedef void			(*t_converter)(va_list args, t_list *flags, t_ba *seg);
typedef void*			(*t_flags_parser)(char **start, t_list **flags);

typedef struct s_format_arg
{
	t_bytes_array		*converted;
	size_t				parsed_size;
}						t_format_arg;

/*
** Type Name: t_format_converter
** Description : This structure type store one type converter
** Vars :
**	-	(Caracter) indicator : The converion indicator
** 	-	(Function)[char *(*f)(void *)] ft_converter :
**		Function to convert an type to a string
*/

typedef struct s_format_converter
{
	char				*indicator;
	t_converter			ft_converter;
}						t_format_converter;

/*
** Type Name: t_format_flag
** Description : This structure type store one flag to formating the format
** Vars :
**	-	(String) flag : The flags (id) example : '#', '-' ...
**		Is also used for parsing
** 	-	(Function)[void *(*f(char **)] ft_flags_parser :
**		This fonction contain the flag parmams parser
**	-	(Function)[char *(*f)(char *)] ft_formater :
**		This function format the converter args
*/

typedef struct s_format_flag
{
	char				*flag;
	t_flags_parser		ft_flags_parser;
}						t_format_flag;

t_format_flag			*ft_modular_flags(void);
t_format_converter		*ft_modular_converter(void);

#endif
