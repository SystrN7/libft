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
LIB_SRCS	=	
TEST_SRCS	=	
HEADS 		=	libft.h
NAME_LIB	=	libft.a
NAME_TEST	=	ft_test


# Workings vars
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
LIB_OBJS	=	${LIB_SRCS:.c=.o}
TEST_OBJS	=	${TEST_SRCS:.c=.o}


all:	${NAME_LIB}

${NAME_LIB}: ${LIB_OBJS}
	ar rcs ${NAME_LIB} ${LIB_OBJS}

${NAME_TEST}: ${LIB_OBJS}
	${CC} ${CFLAGS} ${LIB_OBJS} -o ${NAME_TEST}

.c.o:
	${CC} ${CFLAGS} -c $< -I ${HEADS} -o ${<:.c=.o}

clean:
	${RM} ${LIB_OBJS}

fclean: clean
	${RM} ${NAME_LIB}

re:		fclean all

test: ${NAME_LIB} ${NAME_TEST}
	${NAME_TEST}

.PHONY:		all clean fclean re