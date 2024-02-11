# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:30:55 by sbzizal           #+#    #+#              #
#    Updated: 2023/12/12 20:12:09 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp  Brain.cpp

OBJ = Brain

all: $(OBJ)

$(OBJ): $(SRC) Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)

.PHONY: all fclean