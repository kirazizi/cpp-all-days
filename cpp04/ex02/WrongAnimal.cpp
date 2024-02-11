/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:03 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/08 18:24:15 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src){
    std::cout << "WrongAnimal operator called" << std::endl;
    this->type = src.getType();
    return *this;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "WrongAnimal: Meow Meow" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return this->type;
}
