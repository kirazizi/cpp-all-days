/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:46:09 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 11:13:50 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


#include <iostream>
 
class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string Name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);
        ~DiamondTrap(void);
        DiamondTrap &operator=(DiamondTrap const &rhs);
        void attack(std::string const &target);
        void whoAmI(void);
};

#endif