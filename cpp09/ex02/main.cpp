/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:28:19 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/05 14:44:46 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    if (ac < 2){
        std::cout << "Error : No arguments" << std::endl;
        return 0;
    }

    PmergeMe_vec vec;
    if (vec.main_vector(ac, av)){
        std::cout << "Error: " << std::endl;
        return 0;
    }

    PmergeMe_deq deq;
    if (deq.main_deque(ac, av)){
        std::cout << "Error: " << std::endl;
        return 0;
    }
}