/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:48:58 by sbzizal           #+#    #+#             */
/*   Updated: 2023/10/27 21:24:06 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    std::string name;
    int N;

    std::cout << "name of zombie: ";
    std::cin >> name;
    std::cout << "number of zombie: ";
    std::cin >> N;

    Zombie *zombie = zombieHorde(N, name);
    if (zombie == NULL){
        std::cout << "Error, Number not valid" << std::endl;
        return 1;
    };
    for(int i = 0; i < N; i++){
        zombie[i].announce();
    }
    delete[] zombie;
}