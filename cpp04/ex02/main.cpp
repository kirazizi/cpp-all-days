/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:36:11 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/10 20:17:39 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(){
    AAnimal *dog;
    dog = new Dog();
    dog->makeSound();
    delete dog;
    
    AAnimal *cat;
    cat = new Cat();
    cat->makeSound();
    delete cat;
    
    // AAnimal *animal;
    // animal = new AAnimal();
    // animal->makeSound();
    // delete animal;
}
