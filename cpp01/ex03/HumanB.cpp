/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:39:34 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/20 10:54:44 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB(){
}

void HumanB::attack(){
    if (this->weapon)
        std::cout << this->name << " attacks with their  " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " Has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &refweapon){
    this->weapon = &refweapon;
}