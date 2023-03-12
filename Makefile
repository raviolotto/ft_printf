# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 15:47:29 by jcardina          #+#    #+#              #
#    Updated: 2023/03/11 21:28:38 by jacopo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c\
		utils.c\

CC = gcc

CFAGS = -Wall -Werror -Wextra

OBJECT = {SRCS:.c=.o}

RM = rm -f

.c.o:
	${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

all : ${NAME}

$(NAME) : ${OBJECT}
	ar ${NAME} ${OBJECT}

clean :
	${RM} ${OBJECT}

fclean : clean
	${rm} ${NAME}

re : fclean all
