# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 15:47:29 by jcardina          #+#    #+#              #
#    Updated: 2023/03/10 16:06:19 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c\
		utils.c\

CC = gcc

CFAGS = -Wall -Werror -Wextra

OBJECT = {SRCS:.c=.o}

RM = rm -f

all : ${NAME}

$(NAME) : ${OBJECT}
	ar ${NAME} ${OBJECT}

clean :
	${RM} ${OBJECT}

fclean : clean
	${rm} ${NAME}

re : fclean all
