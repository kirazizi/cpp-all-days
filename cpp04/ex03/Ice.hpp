/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:39:55 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 12:30:09 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria{
    public:
        Ice(void);
        Ice(Ice const &src);
        ~Ice(void);
        Ice &operator=(Ice const &src);

        AMateria* clone(void) const;
        void use(ICharacter &target);
};

#endif