/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:12:14 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/10 20:12:16 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void){
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal(void){
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src){
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = src.getType();
    return *this;
}

std::string AAnimal::getType(void) const{
    return (this->type);
}
