/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:16:31 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/20 15:10:52 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    try{
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = i + 1;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << std::endl;
    
        std::cout << "copy constructor" << std::endl;

        Array<int> b(a);
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << b[i] << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;

    try{
        Array<char> c(5);
        for (unsigned int i = 0; i < c.size(); i++)
            c[i] = i + 97;
        for (unsigned int i = 0; i < c.size(); i++)
            std::cout << c[i] << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}