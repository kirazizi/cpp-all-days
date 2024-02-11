# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 09:05:13 by sbzizal           #+#    #+#              #
#    Updated: 2023/11/10 11:13:43 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = megaphone

all: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

re: fclean all

fclean:
	rm -f $(OBJ)	

run: $(OBJ)
	./$(OBJ) "shhhhh... I think the students are asleep..."
	./$(OBJ) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(OBJ)

.PHONY: all run fclean
