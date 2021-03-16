/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felix <felix@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:47:17 by fgalaup           #+#    #+#             */
/*   Updated: 2021/03/16 11:41:50 by felix            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_format.h"

t_format_flag	*ft_modular_flags(void)
{
	static t_format_flag	flags[6];

	flags[0].flag = "0";
	flags[1].flag = "-";
	flags[2].flag = ".";
	flags[3].flag = "fs";
	flags[4].flag = "#";
	flags[5].flag = NULL;
	flags[0].ft_flags_parser = flag_pars_zero;
	flags[1].ft_flags_parser = flag_pars_less;
	flags[2].ft_flags_parser = flag_pars_dot;
	flags[3].ft_flags_parser = flag_pars_fs;
	flags[4].ft_flags_parser = flag_pars_sharp;
	return (flags);
}
