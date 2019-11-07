# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fgalaup <fgalaup@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/07 14:30:58 by fgalaup      #+#   ##    ##    #+#        #
#    Updated: 2019/11/07 16:16:55 by fgalaup     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

# Project vars
LIB_SRCS	=	Memory/ft_calloc.c \
				Memory/ft_memset.c \
				Memory/ft_bzero.c \
				Memory/ft_memcpy.c \
				Memory/ft_memccpy.c \
				Memory/ft_memmove.c \
				Memory/ft_memchr.c \
				Memory/ft_memcmp.c \
				Math/ft_count_digits.c \
				Type/ft_isalpha.c \
				Type/ft_isdigit.c \
				Type/ft_isalnum.c \
				Type/ft_isprint.c \
				Type/ft_isascii.c \
				Type/Convert/ft_atoi.c \
				Type/Convert/ft_itoa.c \
				Type/Convert/ft_lltostr.c \
				Type/Convert/ft_ulltostr.c \
				Type/Convert/ft_toupper.c \
				Type/Convert/ft_tolower.c \
				String/ft_strlen.c \
				String/ft_strchr.c \
				String/ft_strrchr.c \
				String/ft_strncmp.c \
				String/ft_strnstr.c \
				String/ft_strlcpy.c \
				String/ft_strlcat.c \
				String/ft_strdup.c \
				String/ft_substr.c \
				String/ft_strjoin.c \
				String/ft_split.c \
				String/ft_strtrim.c \
				String/ft_strmapi.c \
				File/ft_putchar_fd.c \
				File/ft_putstr_fd.c \
				File/ft_putendl_fd.c \
				File/ft_putnbr_fd.c \
				List/ft_lstnew.c \
				List/ft_lstnew_front.c \
				List/ft_lstnew_back.c \
				List/ft_lstadd_front.c \
				List/ft_lstadd_back.c \
				List/ft_lstdel_link.c \
				List/ft_lstremove_link.c \
				List/ft_lstclear.c \
				List/ft_lstsize.c \
				List/ft_lstlast.c \
				List/ft_lstiter.c \
				List/ft_lstmap.c 



HEADER		=	libft.h ft_type.h
HEADER_DIR	=	$(shell pwd)

NAME		=	libft.a


# Workings vars
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
BUILD_DIR	=	Build/
LIB_OBJS	=	${LIB_SRCS:.c=.o}
# LIB_OBJS := $(patsubst ./%.cpp,$(BUILD_DIR)/%.o,$(LIB_SRCS))


all:	$(NAME)

$(NAME): $(LIB_OBJS) $(HEADER)
	ar rcs $(NAME) $(LIB_OBJS)

norminette:
	norminette $(LIB_SRCS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -I $(HEADER_DIR) -o $@

clean:
	$(RM) $(LIB_OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all re clean fclean  
