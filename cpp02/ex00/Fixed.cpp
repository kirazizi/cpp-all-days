/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:48:09 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/04 11:59:52 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_value = 0;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_value = src.getRawBits();
    return *this;
}

int  Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_value = raw;
}
