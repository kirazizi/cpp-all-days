/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:31 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/16 11:43:22 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){
}

Serializer::Serializer(Serializer const &src){
    *this = src;
}

Serializer::~Serializer(void){
}

Serializer &Serializer::operator=(Serializer const &src){
    if (this != &src)
        *this = src;
    return *this;
}

uintptr_t Serializer::serialize(Data *ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}
