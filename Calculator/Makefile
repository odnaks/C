# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drestles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 14:23:11 by drestles          #+#    #+#              #
#    Updated: 2018/09/09 14:24:35 by drestles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC += main.c
SRC += default.c
SRC += stack_i.c
SRC += stack_c.c
SRC += sources.c
SRC += evel.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
