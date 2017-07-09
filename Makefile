# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/16 11:35:46 by ddevico           #+#    #+#              #
#    Updated: 2017/06/25 13:55:39 by ddevico          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
PATH_INC = ./libft/

CC = gcc

CFLAGS	= -Wall -Wextra -Werror -O3 -Ofast

SRC = $(shell ls | grep "\.c")

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	@echo "\033[0m";
	$(CC) $(CFLAGS) -I $(PATH_INC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJS) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit
	@echo "\033[1;5;1;36m";
	@echo "COMPILATION OK ;)";
	@echo "\n";


.PHONY: clean fclean re all

clean:
	make -C libft/ clean
	rm -rf $(OBJS)

fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME)

re: fclean all
