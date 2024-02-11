/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:13:21 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/25 18:33:38 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    for (int i = 0; i < 10; i++){
        v.push_back(i);
    }
    try{
        std::cout << easyfind(v, 5) << std::endl;
        std::cout << easyfind(v, 10) << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Not found" << std::endl;
    }
}
