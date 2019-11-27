/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_format.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/03 14:58:32 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/27 16:54:50 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_FORMAT_H
# define FT_FORMAT_H

# include <stdarg.h>

# include "libft.h"
# include "ft_format_type.h"

# define DEBUG TRUE

# define PARSER_ERROR -20
# define PARSER_MALLOC_ARG 1

# define FORMATER_ERROR -30
# define FORMATER_ERROR_ARG_FORMAT 1
# define FORMATER_ERROR_STR_FORMAT 2
# define FORMATER_MALLOC_ADD_SEGMENT 3

# define MERGE_ERROR -40

# define FLAG_ERROR -50

# define FLAG_STAR_DOT 1
# define FLAG_STAR_FS 2

int		ft_printf(const char *format, ...);

int		ft_format(const char *format, va_list args, char **buffer);

ssize_t	ft_format_parser(char *format, va_list args, t_list **format_segments);
ssize_t	ft_format_parse_one(char *start, va_list args, t_format_arg *convert);
ssize_t	ft_format_parse_flag(char *start, va_list args, t_list **flags);
t_ba	*ft_format_convert(char *start, va_list args, t_list *flags);

int		ft_format_formater(char *fmr, t_list *arg, t_list **seg);
t_ba	*ft_format_inter_args(char *cursor);
void	ft_format_params_clear(void *value);

void	debug_parsed_args(t_list *value);
void	debug_parsed_arg(t_format_arg *arg);

void	converter_percent(va_list args, t_list *flags, t_ba *r);
void	converter_char(va_list args, t_list *flags, t_ba *r);
void	converter_string(va_list args, t_list *flags, t_ba *r);
void	converter_pointer(va_list args, t_list *flags, t_ba *r);
void	converter_integer(va_list args, t_list *flags, t_ba *r);
void	converter_unsigned(va_list args, t_list *flags, t_ba *r);
void	converter_hexa_upper(va_list args, t_list *flags, t_ba *r);
void	converter_hexa_lower(va_list args, t_list *flags, t_ba *r);

void	*flag_pars_zero(char **start, t_list **flags);
void	*flag_pars_less(char **start, t_list **flags);
void	*flag_pars_fs(char **start, t_list **flags);
void	*flag_pars_dot(char **start, t_list **flags);
void	*flag_pars_sharp(char **start, t_list **flags);
void	*flag_pars_star(char **start, va_list args, t_list **flags);

char	*insert_zero(char *str, size_t before, size_t after, size_t zero_l);

char	*format_zero(char *indicator, char *converted, t_list *flags);
char	*format_less(char *indicator, char *converted, t_list *flags);
char	*format_fs(char *indicator, char *converted, t_list *flags);
char	*format_dot(char *indicator, char *converted, t_list *flags);
char	*format_sharp(char *indicator, char *converted, t_list *flags);
int		format_star(va_list args, t_list **flags, int affected);

#endif
