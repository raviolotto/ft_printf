# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 15:47:29 by jcardina          #+#    #+#              #
#    Updated: 2023/03/13 12:36:07 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c\
		ft_char.c\
		ft_exa.c\
		ft_number.c\

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
