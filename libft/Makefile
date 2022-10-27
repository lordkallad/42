# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjuriens <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 14:03:21 by rjuriens          #+#    #+#              #
#    Updated: 2022/10/27 14:17:27 by rjuriens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
	ar rs ${NAME} ${OBJS}

all	:	${NAME}

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}
re	:	fclean all
