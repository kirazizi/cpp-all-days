/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:11 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/11 20:22:59 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void){
    this->type = "cure";
}

Cure::Cure(Cure const &src){
    *this = src;
}

Cure::~Cure(void){
}

Cure &Cure::operator=(Cure const &src){
    this->type = src.type;
    return *this;
}

AMateria* Cure::clone(void) const{
    return new Cure(*this);
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
