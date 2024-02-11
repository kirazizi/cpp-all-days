/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:29 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 11:17:41 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap Parameter constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
    std::cout << "FragTrap Assignation operator called" << std::endl;
    this->Name = src.Name;
    this->Hit_points = src.Hit_points;
    this->Energy_points = src.Energy_points;
    this->Attack_damage = src.Attack_damage;
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->Name << " have request a high five" << std::endl;
}

