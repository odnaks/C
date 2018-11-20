# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drestles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 18:03:15 by drestles          #+#    #+#              #
#    Updated: 2018/11/20 20:54:32 by drestles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

FLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o \
	  ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib libft.a

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
