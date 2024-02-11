/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:16:31 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/03 14:44:07 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    RPN rpn;
    if (ac != 2){
        std::cout << "Error" << std::endl;
        return 0;
    }
    if (rpn.check_input(av[1]))
        return 0;
}
