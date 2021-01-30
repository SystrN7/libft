# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgalaup <fgalaup@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 14:30:58 by fgalaup           #+#    #+#              #
#    Updated: 2021/01/30 14:42:01 by fgalaup          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


# Project vars
LIB_SRCS	=	Memory/ft_calloc.c \
				Memory/ft_memdup.c \
				Memory/ft_memset.c \
				Memory/ft_bzero.c \
				Memory/ft_memcpy.c \
				Memory/ft_memccpy.c \
				Memory/ft_memmove.c \
				Memory/ft_memchr.c \
				Memory/ft_memcmp.c \
				Memory/ft_nothing.c \
				Memory/ft_free2d.c \
				Memory/Manager/ft_manager.c \
				Memory/Manager/ft_malloc.c \
				Memory/Manager/ft_free.c \
				Math/ft_count_digits.c \
				Math/ft_absolute.c \
				Math/ft_angle.c \
				Math/ft_vector.c \
				Type/ft_is_in_charset.c \
				Type/ft_isalpha.c \
				Type/ft_isdigit.c \
				Type/ft_isalnum.c \
				Type/ft_isprint.c \
				Type/ft_isascii.c \
				Type/Convert/ft_atoi.c \
				Type/Convert/ft_strtoll.c \
				Type/Convert/ft_itoa.c \
				Type/Convert/ft_lltostr.c \
				Type/Convert/ft_ulltostr.c \
				Type/Convert/ft_base_utils.c \
				Type/Convert/ft_base_ulltostr.c \
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
				String/ft_strformat.c \
				File/get_next_line.c \
				File/ft_file_get_extention.c \
				File/ft_printf_fd.c \
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
				List/ft_lstmap.c \
				List/ft_lstmerge_str_segments.c \
				List/ft_lstmerge_2d.c \
				List/Associative/ft_lst_associative_set.c \
				List/Associative/ft_lst_associative_get.c \
				List/Associative/ft_lst_get_associative.c \
				List/Associative/ft_lst_associative_del.c \
				List/Associative/ft_lst_associative_del_free.c \
				List/BytesArray/ft_lstadd_array_segment.c \
				List/BytesArray/ft_lstmerge_segment.c \
				List/BytesArray/ft_lstdel_array_segment.c \
				List/ft_lst_sort.c \
				Format/ft_parser.c \
				Format/ft_format.c \
				Format/ft_flags.c \
				Format/ft_converter.c \
				Format/Converter/ft_converter_percent.c \
				Format/Converter/ft_converter_char.c \
				Format/Converter/ft_converter_string.c \
				Format/Converter/ft_converter_pointer.c \
				Format/Converter/ft_converter_integer.c \
				Format/Converter/ft_converter_unsigned.c \
				Format/Converter/ft_converter_hexa_upper.c \
				Format/Converter/ft_converter_hexa_lower.c \
				Format/Flags/ft_flags_utils.c \
				Format/Flags/ft_flag_zero.c \
				Format/Flags/ft_flag_fs.c \
				Format/Flags/ft_flag_less.c \
				Format/Flags/ft_flag_dot.c \
				Format/Flags/ft_flag_star.c \
				Format/Flags/ft_flag_sharp.c



HEADER		=	libft.h ft_type.h ft_define.h ft_format.h ft_format_type.h
HEADER_DIR	=	$(shell pwd)

NAME		=	libft.a


# Workings vars
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -g3
RM			=	rm -f
BUILD_DIR	=	Build/
LIB_OBJS	=	${LIB_SRCS:.c=.o}

AR			=	ar
ARFLAGS		=	rcs


all:	$(NAME)

bonus: $(NAME)

$(NAME): $(LIB_OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $(NAME) $(LIB_OBJS)

norminette:
	norminette $(LIB_SRCS) $(HEADER)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -I $(HEADER_DIR) -o $@

clean:
	$(RM) $(LIB_OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all re clean fclean  
