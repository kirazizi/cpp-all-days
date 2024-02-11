# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 11:05:48 by sbzizal           #+#    #+#              #
#    Updated: 2023/11/28 19:42:10 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp

OBJ = fixed

all: $(OBJ)

$(OBJ): $(SRC) Fixed.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)

.PHONY: all fclean