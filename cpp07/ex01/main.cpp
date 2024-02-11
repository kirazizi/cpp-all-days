/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:20:51 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/20 15:17:43 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void print(T value){
    std::cout << value << std::endl;
}

int main(void){
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print<int>);
    
    std::cout << "-----------------------------------" << std::endl;

    char c[] = {'a', 'b', 'c', 'd', 'e'};
    iter(c, 5, print<char>);

}