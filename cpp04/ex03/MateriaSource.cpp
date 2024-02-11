/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:55:06 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 17:57:00 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src){
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
    *this = src;
}

MateriaSource::~MateriaSource(void){
    for (int i = 0; i < 4; i++)
        delete this->materia[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src){
    if (this != &src){
        for (int i = 0; i < 4; i++)
            delete this->materia[i];
        for (int i = 0; i < 4; i++)
            this->materia[i] = src.materia[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia){
    for (int i = 0; i < 4; i++){
        if (this->materia[i] == NULL){
            this->materia[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++){
        if (this->materia[i] != NULL && this->materia[i]->getType() == type)
            return this->materia[i]->clone();
    }
    std::cout << "MATERIA : not found" << std::endl;
    return NULL;
}
