/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:04:56 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/22 15:07:15 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	std::cout << "________heap zombie________" << std::endl;
	Zombie *zombie = newZombie("smail");
	zombie->announce();

	std::cout << "________stack zombie________" << std::endl;
	randomChump("kira");

	delete zombie;
}
