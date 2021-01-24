/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:16:00 by fgalaup           #+#    #+#             */
/*   Updated: 2021/01/24 14:13:19 by fgalaup          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# include "ft_type.h"
# include "ft_define.h"

# include "ft_format.h"
# include "ft_format_type.h"

/*
** =============================================================================
**									MEMORY
** =============================================================================
*/

void	*ft_calloc(size_t count, size_t size);
void	*ft_memdup(void *bytes_array, size_t array_size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_nothing(void *address);
void	ft_free2d(void **address);

/*
** =============================================================================
**									 TYPE
** =============================================================================
*/

int		ft_is_in_charset(const int c, char const *charset);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);

/*
** -----------------------------------------------------------------------------
**							  	  Convertion
** -----------------------------------------------------------------------------
*/

int		ft_atoi(const char *str);
size_t	ft_strtoll(char *str, long long *number);
char	*ft_itoa(int n);
char	*ft_lltostr(long long number);
char	*ft_ulltostr(unsigned long long number);
char	*ft_base_ulltostr(unsigned long long number, char *base);
size_t	ft_count_digits_base(int base_size, unsigned long long number);
char	ft_is_in_base(char c, char *base);
int		ft_check_base(char *base);
char	*ft_is_negative(char *str, char *is_negative);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** =============================================================================
**								   STRING
** =============================================================================
*/

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *find, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strformat(char **result, const char *format, ...);

/*
** =============================================================================
**									FILE
** =============================================================================
*/

void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *s);
void	ft_putendl_fd(int fd, char *s);
void	ft_putnbr_fd(int fd, long long n);
int		ft_printf(const char *format, ...);
int		ft_printf_fd(int fd, const char *format, ...);
char	*ft_file_get_extention(char *file_name);
int		get_next_line(int fd, char **line);
int		get_next_line_core(t_open_fd *context, char **line);
int		ft_reads_line(t_open_fd *context, char *buff, t_list **lst);
ssize_t	ft_add_line_segment(t_list **list, char *str, size_t str_size);

/*
** =============================================================================
**							  		MATH
** =============================================================================
*/

size_t	ft_count_digits(long long number);
size_t	ft_count_udigits(unsigned long long number);

size_t	ft_absolute_ll(long number);
double	ft_absolute_f(double number);
size_t	ft_abs(long long number);
double	ft_absf(double number);

/*
** -----------------------------------------------------------------------------
**								Trigonometry
** -----------------------------------------------------------------------------
*/

double	ft_degree_to_radian(double angle);
double	ft_radian_to_degree(double angle);

t_xy	ft_get_vector(double angle, double magnitude);
double	ft_get_x_vector(double angle, double magnitude);
double	ft_get_y_vector(double angle, double magnitude);

/*
** =============================================================================
**									LIST
** =============================================================================
*/

t_list	*ft_lstnew(void *content);
t_list	*ft_lstnew_back(t_list **list, void *content, void (*del)(void *));
t_list	*ft_lstnew_front(t_list **list, void *content, void (*del)(void *));
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdel_link(t_list *lst, void (*del)(void*));
void	ft_lstremove_link(t_list **list, t_list *link_del, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char	*ft_lstmerge_str_segments(t_list *segments);
void	**ft_lstmerge_2d(t_list *list);
t_list	*ft_lst_sort(t_list *list, t_boolean (*is_sort)(void *, void *));

/*
** -----------------------------------------------------------------------------
**							  	Associative
** -----------------------------------------------------------------------------
*/

t_list	*ft_lst_associative_set(t_list **list, char *key, void *value);
void	*ft_lst_associative_get(const t_list *list, char *key);
void	ft_lst_associative_del(void *to_del);
void	*ft_lst_get_associative(const t_list *list, char *key);

/*
** -----------------------------------------------------------------------------
**							  	  Segment
** -----------------------------------------------------------------------------
*/

t_list	*ft_lstadd_array_segment(t_list **segments, size_t size, char *array);
ssize_t	ft_lstmerge_segment(t_list *segment_list, char **str);
void	ft_lstdel_array_segment(void *to_del);

#endif
