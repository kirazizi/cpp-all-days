/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:46:06 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 11:14:16 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << "DiamondTrap Parameter constructor called" << std::endl;
    Name = name;
    ClapTrap::Name = name + "_clap_name";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src) {
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    this->Name = src.Name;
    this->Hit_points = src.Hit_points;
    this->Energy_points = src.Energy_points;
    this->Attack_damage = src.Attack_damage;
    return *this;
}

void DiamondTrap::attack(std::string const &target){
   ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name is " << this->Name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::Name << std::endl;
}
