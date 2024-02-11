/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:30:58 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 15:44:56 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    {
        const Animal* meta = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
        std::cout << dog->getType() << std::endl;
        std::cout << cat->getType() << std::endl;
        cat->makeSound(); //will output the cat sound!
        dog->makeSound();
        meta->makeSound();
        delete meta;
        delete dog;
        delete cat;
    }
    std::cout << "---------------------" << std::endl;
    {
        const WrongAnimal* metaw = new WrongAnimal();
        const WrongAnimal* catw = new WrongCat();
        std::cout << catw->getType() << std::endl;
        catw->makeSound();
        metaw->makeSound();
        delete metaw;
        delete catw;
    }
}
