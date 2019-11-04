# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/07 14:30:58 by fgalaup      #+#   ##    ##    #+#        #
#    Updated: 2019/11/04 14:07:55 by fgalaup     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

# Project vars
LIB_SRCS	=	ft_calloc.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_isascii.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_split.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_itoa.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_atoi.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstiter.c \
				ft_lstmap.c 



HEADS		=	libft.h ft_type.h

NAME		=	libft.a


# Workings vars
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
LIB_OBJS	=	${LIB_SRCS:.c=.o}


all:	$(NAME)

$(NAME): $(LIB_OBJS) $(HEADS)
	ar rcs $(NAME) $(LIB_OBJS)

%.o: %.c $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(LIB_OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all re clean fclean  
