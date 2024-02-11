/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:28:32 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 11:19:07 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);
        FragTrap &operator=(FragTrap const &rhs);
        void highFivesGuys(void);
};

#endif