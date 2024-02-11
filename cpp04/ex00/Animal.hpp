/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:32:47 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/10 11:42:24 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(Animal const &src);
        virtual ~Animal(void);
        Animal &operator=(Animal const &src);
        std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif