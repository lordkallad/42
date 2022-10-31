# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 14:03:21 by rjuriens          #+#    #+#              #
#    Updated: 2022/10/31 13:33:21 by rjuriens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c	ft_isdigit.c	ft_memcmp.c	ft_strchr.c	ft_strlen.c	ft_strrchr.c	ft_toupper.c ft_atoi.c	ft_isalpha.c	ft_isprint.c	ft_memcpy.c	ft_strlcat.c	ft_strncmp.c	ft_test.c ft_bzero.c	ft_isascii.c	ft_memchr.c	ft_memset.c	ft_strlcpy.c	ft_strnstr.c	ft_tolower.c
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror -I.

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

all	:	${NAME}

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}
	${RM} test
re	:	fclean all

test : re 
	${CC} -o test ft_test.c libft.a