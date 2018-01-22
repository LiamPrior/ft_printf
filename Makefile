# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lprior <lprior@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 10:44:33 by lprior            #+#    #+#              #
#    Updated: 2018/01/22 11:09:00 by lprior           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = ft_fwpa.c ft_parsec.c ft_parsef.c ft_printf.c

OBJECTS = ft_fwpa.o ft_parsec.o ft_parsef.o ft_printf.o

all: $(NAME) 

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(HEADER)
		ar rc libft.a $(OBJECTS) 
		ranlib libft.a

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all