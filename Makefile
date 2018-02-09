# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lprior <lprior@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 10:44:33 by lprior            #+#    #+#              #
#    Updated: 2018/02/08 15:10:54 by lprior           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = ft_fwpa.c ft_parsec.c ft_parsef.c ft_printf.c ft_basic_print.c \
	ft_print_pup.c ft_wchar_bonus.c ft_parse_tools.c ft_check.c ft_prints.c

OBJECTS = ft_fwpa.o ft_parsec.o ft_parsef.o ft_printf.o ft_basic_print.o \
	ft_print_pup.o ft_wchar_bonus.o ft_parse_tools.o ft_check.o ft_prints.o

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