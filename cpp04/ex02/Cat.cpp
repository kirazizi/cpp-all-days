/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:40:17 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 20:13:16 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &src){
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain();
    *this = src;
}

Cat::~Cat(void){
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(Cat const &src){
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &src){
        delete brain;
        brain = new Brain();
        *brain = *src.brain;
        this->type = src.getType();
    }
    return *this;
}

void Cat::makeSound(void) const{
    std::cout << "Cat makeSound called" << std::endl;
}

