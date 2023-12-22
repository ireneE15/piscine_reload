# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 11:15:37 by iescalon          #+#    #+#              #
#    Updated: 2023/12/22 11:32:55 by iescalon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ./srcs/ft_display_file.co

OBJS	= ${SRC: .c=.o}

NAME	= ft_display_file

AR		= ar rcs

RM		= rm -fr

LIB		= ranlib

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