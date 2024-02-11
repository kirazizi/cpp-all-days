# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:30:55 by sbzizal           #+#    #+#              #
#    Updated: 2023/12/10 20:14:51 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp  Brain.cpp

OBJ = AAnimal

all: $(OBJ)

$(OBJ): $(SRC) AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)

.PHONY: all fclean