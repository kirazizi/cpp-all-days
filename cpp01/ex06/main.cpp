/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:25:43 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/21 11:31:20 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl harl;

    std::string level;
    std::cout << "Enter level: ";
    std::cin >> level;
    harl.complain(level);

}