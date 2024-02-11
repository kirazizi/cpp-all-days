/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:36:12 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 12:30:15 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
    public:
        Cure(void);
        Cure(Cure const &src);
        ~Cure(void);
        Cure &operator=(Cure const &src);

        AMateria* clone(void) const;
        void use(ICharacter &target);
};

#endif