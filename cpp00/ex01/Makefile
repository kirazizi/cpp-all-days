# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 18:15:04 by sbzizal           #+#    #+#              #
#    Updated: 2023/11/20 15:25:21 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp main.cpp PhoneBook.cpp

OBJ = phonebook

all: $(OBJ)

$(OBJ): $(SRC) Contact.hpp PhoneBook.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)

run: $(OBJ)
	./$(OBJ)

.PHONY: all run fclean
