/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:20:58 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/08 16:49:08 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap clap("clap");
    ClapTrap clap2(clap);
    ClapTrap clap3("clap3");

    clap3 = clap2;

    clap.attack("clap2");
    clap2.takeDamage(5);
    clap2.beRepaired(5);
}