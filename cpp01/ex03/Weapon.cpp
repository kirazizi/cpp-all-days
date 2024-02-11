/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:22:50 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/23 16:16:19 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){
}

std::string const &Weapon::getType(){
    return this->type;
}

void Weapon::setType(std::string type){
    this->type = type;
}