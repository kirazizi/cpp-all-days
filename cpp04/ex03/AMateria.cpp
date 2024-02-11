/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:49:25 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/11 20:24:27 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
}

AMateria::AMateria(std::string const &type){
    this->type = type;
}

AMateria::AMateria(AMateria const &src){
    *this = src;
}

AMateria::~AMateria(void){
}

AMateria &AMateria::operator=(AMateria const &src){
    this->type = src.type;
    return *this;
}

std::string const &AMateria::getType(void) const{
    return this->type;
}

void AMateria::use(ICharacter &target){
    (void)target;
}

