/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:36:11 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 20:20:47 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(){
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //should not create a leak
    delete i;

    int size = 4;
    Animal *animals[size];
    
    for(int i = 0; i < size; i++){
        if(i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "******************************" << std::endl;
    for(int i = 0; i < size; i++){
        animals[i]->makeSound();
    }
    std::cout << "******************************" << std::endl;

    for(int i = 0; i < size; i++)
        delete animals[i];

    return 0;
}