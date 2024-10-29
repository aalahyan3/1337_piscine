CC = cc
CFLAGS =  -Wall -Wextra -Werror -I includes
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
OFILES = $(CFILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: srcs/%.c includes/ft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
