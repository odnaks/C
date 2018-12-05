NAME		= fillit
SRC			= srcs/
READ		= $(SRC)parcer/
SOLVE		= $(SRC)solve/
INCLUDES	= includes/
SOURCES		= $(SRC)main.c $(READ)read.c $(READ)struct.c \
				$(READ)chclear.c $(READ)clear.c $(SOLVE)solve.c \
				$(SOLVE)brut.c $(SOLVE)workmat.c
FLAGS		= #-Wall -Werror -Wextra

all: $(NAME)
$(NAME):
	 gcc $(FLAGS) -o $(NAME) $(SOURCES) -L. -lft
clean:
	/bin/rm -f  $(NAME)
fclean: clean
re: fclean all