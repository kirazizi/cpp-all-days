/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:51:28 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 12:30:03 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource{
    public:
        virtual ~IMateriaSource(void) {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif