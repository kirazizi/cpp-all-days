/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:41:33 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 10:12:50 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("kira");
    ScavTrap scav("smail");

    clap.attack("smail");

    scav.takeDamage(50);
    scav.beRepaired(10);
    scav.guardGate();
    scav.attack("kira");
}