# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 19:37:46 by mroman-j          #+#    #+#              #
#    Updated: 2024/04/10 17:02:47 by mroman-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc -Wall -Werror -Wextra
SRC = analisis.c call_functions.c first_line.c ft_lines.c main.c make_array.c
DEPS = header.h
OBJ = $(SRC:.c=.o)
VPATH = src

all:	$(NAME)

$(NAME):	$(OBJ) $(DEPS)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
