### Variables ###
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsint.c ft_hexa.c \
	ft_adress.c
OBJS = $(FILES:.c=.o) # Create the same in FILES list with the .o extension

### Script ###
all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $(OBJS)

$(OBJS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
