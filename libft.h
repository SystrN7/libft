/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:16:00 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/21 09:54:57 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# include "ft_type.h"

void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_is_in_charset(const int c, char const *charset);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);

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

void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *s);
void	ft_putendl_fd(int fd, char *s);
void	ft_putnbr_fd(int fd, long long n);

size_t	ft_count_digits(long long number);
size_t	ft_count_udigits(unsigned long long number);

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

t_list	*ft_lst_associative_set(t_list **list, char *key, void *value);
void	*ft_lst_associative_get(const t_list *list, char *key);
void	ft_lst_associative_del(void *to_del);
void	*ft_lst_get_associative(const t_list *list, char *key);

t_list	*ft_lstadd_array_segment(t_list **segments, size_t size, char *array);
ssize_t	ft_lstmerge_segment(t_list *segment_list, char **str);
void	ft_lstdel_array_segment(void *to_del);

#endif
