/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:34 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/06 10:09:44 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clap("kira");
    ScavTrap scav("smail");
    FragTrap frag("zizi");

    clap.attack("smail");

    scav.takeDamage(50);
    scav.beRepaired(10);
    scav.guardGate();
    scav.attack("kira");

    frag.takeDamage(50);
    frag.beRepaired(10);
    frag.highFivesGuys();
    frag.attack("smail");
}
