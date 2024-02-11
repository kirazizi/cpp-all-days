/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:49:32 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/13 13:12:53 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>

class Base{
    public:
        virtual ~Base(void);
};

class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

Base * generate(void);
void identify(Base *p);
void identify(Base &p);

#endif