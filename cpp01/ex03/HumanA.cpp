/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:31:16 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/23 18:56:27 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &refweapon) : weapon(refweapon){
    this->name = name;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
    std::cout << this->name << " attacks with their  " << this->weapon.getType() << std::endl;
}