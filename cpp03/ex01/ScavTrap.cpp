/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:41:39 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/08 16:50:08 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap Parameter constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->Name = src.Name;
    this->Hit_points = src.Hit_points;
    this->Energy_points = src.Energy_points;
    this->Attack_damage = src.Attack_damage;
    return *this;
}

void ScavTrap::attack(std::string const &target){
    if (this->Hit_points == 0){
        std::cout << "ScavTrap " << this->Name << " is dead !" << std::endl;
    }
    else if (this->Energy_points > 0)
    {
        this->Energy_points -= 1;
        std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->Name << " is out of energy !" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
