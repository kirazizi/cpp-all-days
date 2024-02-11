/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:46:29 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/10 17:18:35 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain(void){
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src){
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &src){
        for (int i = 0; i < 100; i++)
            ideas[i] = src.ideas[i];
    }
    return *this;
}
