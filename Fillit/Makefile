NAME		= fillit
READ		= $(SRC)read/
SLOVE		= $(SRC)slove/
SRC			= srcs/
INCLUDES	= includes/ft.h libft/includes/libft.h
SOURCES		= $(SRC)main.c $(READ)check.c $(READ)clear.c \
				$(READ)read.c $(READ)struct.c $(READ)chclear.c \
				$(SLOVE)brut.c $(SLOVE)slove.c $(SLOVE)workmat.c
FLAGS		= -Wall -Werror -Wextra  

all: $(NAME)
$(NAME):
	 gcc $(FLAGS) -o $(NAME) $(SOURCES) -L /libft/ -ltf 
clean:
	/bin/rm -f  $(NAME)
fclean: clean
re: fclean all