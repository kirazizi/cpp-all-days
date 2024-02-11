/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:22:23 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/28 15:52:36 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    try{
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "-------------------------------------" << std::endl;
    try{
        Span sp1 = Span(10000);
        std::vector<int> vec;
        for (int i = 0; i < 10000; i++)
            vec.push_back(i);
        sp1.addNumber(vec.begin(), vec.end());
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
