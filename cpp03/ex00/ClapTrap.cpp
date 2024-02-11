/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:21:26 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/08 16:50:26 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap Parameter constructor called" << std::endl;
    this->Name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src){
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src){
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->Name = src.Name;
    this->Hit_points = src.Hit_points;
    this->Energy_points = src.Energy_points;
    this->Attack_damage = src.Attack_damage;
    return *this;
}

void ClapTrap::attack(std::string const &target){
    if (this->Hit_points == 0){
        std::cout << "ClapTrap " << this->Name << " is dead !" << std::endl;
    }
    else if (this->Energy_points > 0)
    {
        this->Energy_points -= 1;
        std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is out of energy !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->Hit_points == 0 || this->Energy_points == 0){
        std::cout << "ClapTrap " << this->Name << " is dead !" << std::endl;
        return ;
    }
    if ((int)amount >= this->Hit_points)
        this->Hit_points = 0;
    else
        this->Hit_points -= amount;
    std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->Hit_points == 0 || this->Energy_points == 0){
        std::cout << "ClapTrap " << this->Name << " is dead !" << std::endl;
        return ;
    }
    this->Hit_points += amount;
    this->Energy_points -= 1;
    std::cout << "ClapTrap " << this->Name << " be repaired " << amount << " points of damage !" << std::endl;
}
