NAME :=			fillit
LIB :=			libft.a

C_OBJS :=		$(patsubst %.c,%.o,$(wildcard ./srcs/*.c))

L_OBJS :=		$(patsubst %.c,%.o,$(wildcard ./libft/*.c))
INCLUDE_DIR :=	./includes

CFLAGS +=		-Wall -Wextra -Werror -I$(INCLUDE_DIR)
LDFLAGS +=		-L./ -lft

.PHONY:			all clean fclean re

all: $(NAME)

$(LIB): $(L_OBJS)
	ar rc $(LIB) $(L_OBJS)
	ranlib $(LIB)

$(NAME): $(LIB) $(C_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(C_OBJS) $(LDFLAGS)

clean:
	@- $(RM) $(C_OBJS) $(L_OBJS)

fclean: clean
	@- $(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all, clean, fclean, re