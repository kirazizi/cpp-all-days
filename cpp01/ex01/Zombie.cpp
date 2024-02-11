/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:49:03 by sbzizal           #+#    #+#             */
/*   Updated: 2023/10/28 13:45:39 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name;
}

void Zombie::announce(){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}