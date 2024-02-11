/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:42:50 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/08 18:23:53 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &src){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog(void){
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src){
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = src.getType();
    return *this;
}

void Dog::makeSound(void) const{
    std::cout << "Dog makeSound called" << std::endl;
}