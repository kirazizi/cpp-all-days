/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:26:14 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/24 12:33:38 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    fun_ptr[0] = &Harl::debug;
    fun_ptr[1] = &Harl::info;
    fun_ptr[2] = &Harl::warning;
    fun_ptr[3] = &Harl::error;
}

Harl::~Harl(){
}

void Harl::complain(std::string level){
    std::string table_lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while(i < 4){
        if (table_lvl[i] == level){
            break ;
        }
        i++;
    }

    switch(i){
        case 0:
            (this->*fun_ptr[0])();
        case 1:
            (this->*fun_ptr[1])();
        case 2:
            (this->*fun_ptr[2])();
        case 3:
            (this->*fun_ptr[3])();
            break;
        default:
            std::cout << "[NOT FOUND]" << std::endl;
    }
}

void Harl::debug(void){
    std::cout << "[DEBUG]" << std::endl;
}

void Harl::info(void){
    std::cout << "[INFO]" << std::endl;
}

void Harl::warning(void){
    std::cout << "[WARNING]" << std::endl;
}

void Harl::error(void){
    std::cout << "[ERROR]" << std::endl;
}

