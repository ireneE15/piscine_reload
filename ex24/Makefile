# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 10:18:10 by iescalon          #+#    #+#              #
#    Updated: 2023/12/21 12:26:36 by iescalon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS	= ${SRC: .c=.o}

HEAD	= ./includes/

NAME	= libft.a

AR		= ar rcs

RM		= rm -f

LIB 	= ranlib

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<: .c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}
			
clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}
			
re:			fclean all

.PHONY:		all clean fclean re