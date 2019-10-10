/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:16:00 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 17:24:36 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

//  #include <string.h>

#ifndef FT_LIB_H
# define FT_LIB_H

	#include <stdlib.h>
	//#define NULL 0
	//typedef unsigned long size_t;



	void	*ft_calloc(size_t count, size_t size);
	void	*ft_memset(void *b, int c, size_t len);
	void	ft_bzero(void *s, size_t n);
	void	*ft_memcpy(void *dst, const void *src, size_t n);
	void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
	void	*ft_memmove(void *dst, const void *src, size_t len);
	void	*ft_memchr(const void *s, int c, size_t n);
	int		ft_memcmp(const void *s1, const void *s2, size_t n);


	size_t	ft_strlen(const char *s);

	int		ft_isalpha(int c);
	int		ft_isdigit(int c);
	int		ft_isalnum(int c);
	int		ft_isprint(int c);
	int		ft_isascii(int c);

	int		ft_toupper(int c);
	int		ft_tolower(int c);

	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);

	char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);
	size_t	ft_strlcat(char *dst, const char *src, size_t size);
	
	char	*ft_strdup(const char *s1);
	char	*ft_strjoin(char const *s1, char const *s2);
	char	*ft_substr(char const *s, unsigned int start, size_t len);
	char	*ft_strtrim(char const *s1, char const *set);
	char	**ft_split(char const *s, char c);

	int		ft_atoi(const char *str);
	char	*ft_itoa(int n);

	char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
