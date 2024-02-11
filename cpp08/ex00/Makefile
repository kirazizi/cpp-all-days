# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 13:13:19 by sbzizal           #+#    #+#              #
#    Updated: 2024/01/22 13:15:41 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = easyfind

all: $(OBJ)

$(OBJ): $(SRC) easyfind.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)

.PHONY: all fclean