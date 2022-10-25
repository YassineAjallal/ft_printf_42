.PHONY: clean all re fclean
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_check_conver.c ft_print_d.c ft_print_p.c ft_print_u.c ft_print_xl.c ft_print_xs.c ft_printf.c ft_putnbr.c ft_putstr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
	@echo "done"

$(NAME):
	@CC $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all