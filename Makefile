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
SRCS		=	
NAME_LIB	=	libft.a


# Workings vars
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
LIB_OBJS	=	${LIB_SRCS:.c=.o}


all:	${NAME_LIB}

${NAME_LIB}: ${LIB_OBJS}
	ar rcs ${NAME_LIB} ${LIB_OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -I ${HEADS} -o ${<:.c=.o}

clean:
	${RM} ${LIB_OBJS}

fclean: clean
	${RM} ${NAME_LIB}

re:		fclean all

.PHONY:		all clean fclean re