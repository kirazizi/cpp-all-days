/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:28 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/12 15:56:32 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data data;
    data.value = 40;

    uintptr_t raw = Serializer::serialize(&data);
    Data *ptr = Serializer::deserialize(raw);

    std::cout << "data value = " << ptr->value << std::endl;
}