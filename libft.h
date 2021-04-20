/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:16:00 by fgalaup           #+#    #+#             */
/*   Updated: 2021/04/20 13:58:01 by fgalaup          ###   ########lyon.fr   */
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

# define DEBUG

# ifdef DEBUG
#  include "Memory/Manager/Debug/ft_managed_debug.h"
# endif

/*
** =============================================================================
**									 NORME
** =============================================================================
*/

void	*ftn(void **dest, void *src);
int		fti(int *dest, int src);
void	*ft_tern_pt(t_bool condition, void *value1, void *value2);
int		ft_tern_nu(t_bool condition, int value1, int value2);

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

void	ft_2d_free(void **address);
size_t	ft_2d_count(void **array);

/*
** -----------------------------------------------------------------------------
**							  	  Managed Alloc
** -----------------------------------------------------------------------------
*/

# ifndef DEBUG
t_list	**ft_managed_get_malloc_list(void);
void	*ft_managed_malloc(size_t size);
void	ft_managed_free(void *ptr);
void	ft_managed_free_all(void);
# endif

t_term	ft_managed_termination_function(t_ftermination f);
void	*ft_managed_termination_params(void *params);

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
int		ft_stricmp(const char *s1, const char *s2);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strsplit_last(const char *string, int separator);

t_bool	ft_strtest(const char *string, int (*f)(int));
char	*ft_striter(char *string, int (*f)(int));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strformat(char **result, const char *format, ...);

char	*ft_2d_merge(char **array);

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
int		ft_add_line_segment(t_list **list, char *str, int str_size);

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

t_list	*ft_lst_get_associative_link(const t_list *list, const char *key);
t_asso	*ft_lst_get_associative(const t_list *list, const char *key);
void	*ft_lst_associative_get(const t_list *list, const char *key);

t_bool	ft_lst_associative_remove(t_list **lst, char *key, void (*del)(void *));
void	ft_lst_associative_del(t_associative *to_del, void (*del)(void *));
void	ft_lst_associative_del_free(void *to_del);

/*
** -----------------------------------------------------------------------------
**							  	Binary Tree
** -----------------------------------------------------------------------------
*/

t_bnode	*ft_binarytree_node_create(void *value);

/*
** -----------------------------------------------------------------------------
**							  	  bidirectional
** -----------------------------------------------------------------------------
*/

t_blst	ft_blst_first(t_bidirectional_list *list);
t_blst	ft_blst_last(t_bidirectional_list *list);

t_blst	ft_blst_add_front(t_bidirectional_list **list, t_blst link);
t_blst	ft_blst_add_back(t_bidirectional_list **list, t_blst link);
t_blst	ft_blst_insert_link(t_bidirectional_list **list, t_blst link);

t_blst	ft_blst_new(void *content);
t_blst	ft_blst_new_back(t_blst *list, void *content, void (*del)(void *));
t_blst	ft_blst_new_front(t_blst *list, void *content, void (*del)(void *));

void	ft_blst_delete_link(t_bidirectional_list *link, void (*del)(void*));
void	ft_blst_remove_link(t_blst *list, t_blst link, void (*del)(void*));
void	ft_blst_clear(t_bidirectional_list **list, void (*del)(void*));

/*
** -----------------------------------------------------------------------------
**							  	  Segment
** -----------------------------------------------------------------------------
*/

t_list	*ft_lstadd_array_segment(t_list **segments, int size, char *array);
int		ft_lstmerge_segment(t_list *segment_list, char **str);
void	ft_lstdel_array_segment(void *to_del);

#endif
