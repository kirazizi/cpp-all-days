/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:31 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 11:17:46 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);
        FragTrap &operator=(FragTrap const &rhs);
        void highFivesGuys(void);
};

#endif