# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 20:47:50 by sbzizal           #+#    #+#              #
#    Updated: 2023/12/12 12:28:34 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJ = AMateria

all: $(OBJ)

$(OBJ): $(SRC) AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)

.PHONY: all fclean