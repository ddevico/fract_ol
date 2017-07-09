# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 14:57:53 by ddevico           #+#    #+#              #
#    Updated: 2015/12/02 17:55:01 by ddevico          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS += -Wall -Wextra -Werror -Iinclude/

SRC =	ft_isdigit.c ft_memcpy.c ft_putendl.c ft_strcat.c ft_strdup.c \
		ft_strlen.c ft_strnstr.c ft_toupper.c ft_atoi.c ft_isprint.c \
		ft_memdel.c ft_putendl_fd.c ft_strchr.c ft_strequ.c ft_strncat.c \
		ft_strrchr.c ft_bzero.c ft_memalloc.c ft_memmove.c ft_putnbr.c \
		ft_strclr.c ft_striter.c ft_strncmp.c ft_strstr.c ft_isalnum.c \
		ft_memccpy.c ft_memset.c ft_putnbr_fd.c ft_strcmp.c ft_striteri.c \
		ft_strncpy.c ft_strsub.c ft_isalpha.c ft_memchr.c ft_putchar.c \
		ft_putstr.c ft_strcpy.c ft_strjoin.c ft_strnequ.c ft_strtrim.c \
		ft_isascii.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_strdel.c \
		ft_strlcat.c ft_strnew.c ft_tolower.c ft_strmap.c ft_strmapi.c \
		ft_itoa.c ft_strsplit.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
		ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_isspace.c ft_isblank.c \
		ft_min.c ft_max.c ft_isgraph.c

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
