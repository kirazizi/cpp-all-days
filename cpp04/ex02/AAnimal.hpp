/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:11:53 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/10 20:11:57 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(void);
        AAnimal(AAnimal const &src);
        virtual ~AAnimal(void);
        AAnimal &operator=(AAnimal const &src);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0; 
};

#endif