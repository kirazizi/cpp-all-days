/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:19:40 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/24 12:32:53 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
    fun_ptr[0] = &Harl::debug;
    fun_ptr[1] = &Harl::info;
    fun_ptr[2] = &Harl::warning;
    fun_ptr[3] = &Harl::error;
}

Harl::~Harl(void){
}

void Harl::complain(std::string level){

    std::string table_lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (table_lvl[i] == level){
            (this->*fun_ptr[i])();
            return ;
        }
    }
    std::cout << "[NOT FOUND]" << std::endl;
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