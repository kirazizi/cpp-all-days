/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:34:02 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/08 18:23:08 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal(void){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &src){
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = src.getType();
    return *this;
}

std::string Animal::getType(void) const{
    return (this->type);
}

void Animal::makeSound(void) const{
    std::cout << "Animal makeSound called" << std::endl;
}
