/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:50:19 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/16 10:19:04 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void){
}

Base * generate(void){
    int i = std::time(NULL) % 3;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void identify(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << "A class identified from pointer" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B class identified from pointer" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C class identified from pointer" << std::endl;
}

void identify(Base &p){
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "A class identified from reference" << std::endl;
        (void)a;
    }
    catch(std::bad_cast &e){
        try{
            B &b = dynamic_cast<B&>(p);
            std::cout << "B class identified from reference" << std::endl;
            (void)b;
        }
        catch(std::bad_cast &e){
            try{
                C &c = dynamic_cast<C&>(p);
                std::cout << "C class identified from reference" << std::endl;
                (void)c;
            }
            catch(std::bad_cast &e){
                std::cout << "Error: " << e.what() << std::endl;
            }
        }
    }
}

