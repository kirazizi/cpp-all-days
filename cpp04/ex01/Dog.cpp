/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:42:50 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 20:10:22 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
    this->type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src){
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain();
    *this = src;
}

Dog::~Dog(void){
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(Dog const &src){
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &src){
        delete brain;
        brain = new Brain();
        *brain = *src.brain;
        this->type = src.getType();
    }
    return *this;
}

void Dog::makeSound(void) const{
    std::cout << "Dog makeSound called" << std::endl;
}