/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:48:33 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/11 15:46:49 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);
        AMateria &operator=(AMateria const &src);

        std::string const &getType(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif