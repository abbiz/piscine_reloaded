# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abizeau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:54:37 by abizeau           #+#    #+#              #
#    Updated: 2016/11/07 13:54:38 by abizeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRC=	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

INC = ./includes

OBJ = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o

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
