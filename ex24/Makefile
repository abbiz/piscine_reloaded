NAME= libft.a

SRC=	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

		INC = ./includes

OBJ = $(SRC:.c=.o)

all: $(NAME)

	$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "$(NAME) has been created."

	clean:
	@rm -rf $(OBJ)
	@echo "$(OBJ) >>> Objects files are deleted."

	fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) are deleted."

	re: fclean all

	.PHONY: clean fclean re
