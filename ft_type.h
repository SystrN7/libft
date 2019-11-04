/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:30:05 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 11:26:57 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_TYPE_H
# define FT_TYPE_H

# define TRUE 1
# define FALSE 0

typedef char		t_boolean;
typedef char		t_byte;
typedef t_byte*		t_bytes;

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif
