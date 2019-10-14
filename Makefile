# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fgalaup <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/07 14:30:58 by fgalaup      #+#   ##    ##    #+#        #
#    Updated: 2019/10/07 15:47:50 by fgalaup     ###    #+. /#+    ###.fr      #
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
				ft_putnbr_fd.c

BONUS_SRCS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c 



HEADS			= .

NAME	=	libft.a


# Workings vars
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
LIB_OBJS	=	${LIB_SRCS:.c=.o}
BONUS_OBJS	=	${BONUS_SRCS:.c=.o}


all:	$(NAME)

$(NAME): ${LIB_OBJS}
	ar rcs ${NAME} ${LIB_OBJS}

bonus: ${LIB_OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${LIB_OBJS} ${BONUS_OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -I ${HEADS} -o ${<:.c=.o}

clean:
	${RM} ${LIB_OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re:		fclean all

.PHONY:		all re bonus clean fclean  