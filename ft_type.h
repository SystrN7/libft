/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:30:05 by fgalaup      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 15:19:03 by fgalaup     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_TYPE_H
# define FT_TYPE_H

/*
** =============================================================================
**									GENERIC
** =============================================================================
*/

/*
** Type Name: t_boolean
** Description : This type contain a boolean value the posible value as contain
** 		in enumaration e_boolean
** Possible Value :
**	-	(TRUE) = 1 : The condition is true
** 	-	(FALSE) = 0 : The condition is false
*/

enum				e_boolean
{
	FALSE = 0,
	TRUE
};
typedef char		t_boolean;
typedef t_boolean		t_bool;

/*
** Type Name: t_byte
** Description : Better name for non char data
*/
typedef char		t_byte;

/*
** Type Name: t_bytes
** Description : Better name for generic bytes array
*/
typedef t_byte*		t_bytes;

/*
** =============================================================================
**									LIST
** =============================================================================
*/

/*
** Type Name: t_list
** Description : This structure type store link of chained list.
** Vars :
**	-	(void*) content : The value of to store in the link of list.
** 	-	(s_list*) next : The address of next element of the list.
*/

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** Type Name: t_bytes_array
** Description : This structure is usually contained in a list.
** 		The Structre store a non null (\0) terminated bytes array
** Vars :
**	-	(size) size : The size of array (number of element).
** 	-	(byte*) array : The array.
*/
typedef struct		s_bytes_array
{
	size_t			size;
	char			*array;
}					t_bytes_array;

/*
** Type Name: t_associative
** Description : This structure is usually contained in a list.
** 		The Structre associate an element with key in associative list
** Vars :
**	-	(String) key : The key.
** 	-	(void*) value : The value of to store in the link of associative list.
**	NOTE : The is never free by a function of libft (Use static element)
*/

typedef struct		s_associative
{
	char			*key;
	void			*value;
}					t_associative;

/*
** =============================================================================
**									MATH
** =============================================================================
*/

/*
** Type Name: t_xy
** Description : This structure type store tow number representing vector,
** coordonee.
** Vars :
**	-	double x : The value for the axis of X-axis (abscissa).
** 	-	double y : The value for the axis of Y-axis (???).
*/

typedef struct		s_xy
{
	double			x;
	double			y;
}					t_xy;

/*
** Type Name: t_xy
** Description : This structure type store tow number representing coordonee.
** Vars :
**	-	int x : The value for the axis of X-axis (abscissa).
** 	-	int y : The value for the axis of Y-axis (???).
*/

typedef struct		s_pos
{
	int			x;
	int			y;
}					t_pos;

/*
** =============================================================================
**									FILE
** =============================================================================
*/

/*
** Type Name: t_open_fd
** Description : This structure type store one file descriptor
** 					with non returned content.
** Vars :
**	-	(int) fd : The file desciptor (id).
** 	-	(ssize) size : the size of unreturned content.
**	-	(char *) over : The unreturned content.
*/

typedef struct		s_open_fd
{
	int				fd;
	ssize_t			size;
	char			*over;
}					t_open_fd;

#endif
