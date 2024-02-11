/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:49:15 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/12 20:04:12 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// void leaks(void)
// {
//     system("leaks AMateria");
// }

int main(void)
{
    
    Character *kira = new Character("Kira");
    Character *smail = new Character("smail");

    AMateria *ice = new Ice();
    // AMateria *cure = new Cure();

    kira->equip(ice);
    // kira->equip(cure);

    
    *smail = *kira;
    
    kira->use(0, *kira);

    
    smail->use(0, *kira);
    

    
    
    // IMateriaSource *src = new MateriaSource();
    
    // src->learnMateria(ice);
    // src->learnMateria(cure);
    
    // kira->equip(src->createMateria("ice"));
    // kira->equip(src->createMateria("cure"));
    
    // kira->use(0, *kira);
    // kira->use(1, *kira);


    // IMateriaSource *src = new MateriaSource();

    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // ICharacter *me = new Character("me");

    // AMateria *tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // ICharacter *bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    // delete src;
    return 0;
}