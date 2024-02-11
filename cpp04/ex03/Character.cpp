/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:49:58 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 19:58:55 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){
    this->name = "default";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string const &name){
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(Character const &src){
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    *this = src;
}

Character::~Character(void){
    for (int i = 0; i < 4; i++)
        delete this->inventory[i];
}

Character &Character::operator=(Character const &src){
    if (this != &src){
        for (int i = 0; i < 4; i++)
            delete this->inventory[i];
        this->name = src.name;
        for (int i = 0; i < 4; i++){
            if (src.inventory[i] != NULL)
                this->inventory[i] = src.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const &Character::getName(void) const{
    return this->name;
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++){
        if (this->inventory[i] == NULL){
            this->inventory[i] = m;
            return;
        }
    }
    std::cout << "EQUIP : inventory full" << std::endl;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3){
        std::cout << "UNEQUIP : index out of range" << std::endl;
        return ;
    }   
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL){
        this->inventory[idx] = NULL;
    }
    else
        std::cout << "UNEQUIP : empty slot " << std::endl;
}

void Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx > 3){
        std::cout << "index out of range" << std::endl;
        return ;
    }
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
    else
        std::cout << "USE : empty slot" << std::endl;
}
