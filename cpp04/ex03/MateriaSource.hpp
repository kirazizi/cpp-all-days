/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:54:36 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/11 20:16:12 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria *materia[4];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        ~MateriaSource(void);
        MateriaSource &operator=(MateriaSource const &src);

        void learnMateria(AMateria *materia);
        AMateria *createMateria(std::string const &type);
};

#endif