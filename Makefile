# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lprior <lprior@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 10:44:33 by lprior            #+#    #+#              #
#    Updated: 2018/01/26 17:25:28 by lprior           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = ft_fwpa.c ft_parsec.c ft_parsef.c ft_printf.c

OBJECTS = ft_fwpa.o ft_parsec.o ft_parsef.o ft_printf.o

$(BIN):
	@make -C libft

all: $(NAME) 

$(NAME):
		gcc $(FLAGS) -c $(SRC) $(BIN) -I $(HEADER)
		ar rc libftprintf.a $(OBJECTS) 
		ranlib libftprintf.a

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all