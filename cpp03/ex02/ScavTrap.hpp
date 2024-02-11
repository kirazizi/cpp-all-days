/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:40 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/05 16:18:59 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);
        ScavTrap &operator=(ScavTrap const &rhs);
        void attack(std::string const &target);
        void guardGate(void);
};

#endif