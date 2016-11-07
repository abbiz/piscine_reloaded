# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abizeau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:55:11 by abizeau           #+#    #+#              #
#    Updated: 2016/11/07 13:55:13 by abizeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

OBJ = ./ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) $(OBJ)
	@echo "$(NAME) has been created."

clean:
	rm -rf $(OBJ)
	@echo "$(OBJ) >>> Objects files are deleted."

fclean: clean
	rm -rf $(NAME)
	@echo "$(NAME) are deleted."

re: fclean all

.PHONY: clean fclean re

