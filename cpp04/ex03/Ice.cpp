/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:40:15 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/11 16:42:01 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void){
    this->type = "ice";
}

Ice::Ice(Ice const &src){
    *this = src;
}

Ice::~Ice(void){
}

Ice &Ice::operator=(Ice const &src){
    this->type = src.type;
    return *this;
}

AMateria* Ice::clone(void) const{
    return new Ice(*this);    
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
