/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:49:07 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/22 15:30:56 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
	if (N <= 0)
		return NULL;
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombie[i].setName(name);
	}
	return zombie;
}