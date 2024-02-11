/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:05:59 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/04 12:41:04 by sbzizal          ###   ########.fr       */
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

Fixed::Fixed(int const nb){
    std::cout << "Int constructor called" << std::endl;
    this->fixed_value = nb << this->fractional_bits;
}

Fixed::Fixed(float const nb){
    std::cout << "Float constructor called" << std::endl;
    float tmp = nb * (1 << this->fractional_bits);
    this->fixed_value = roundf(tmp);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src){
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_value = src.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj){
    os << obj.toFloat();
    return os;
}

float Fixed::toFloat(void) const {
    return (float)this->fixed_value / (float)(1 << this->fractional_bits);
}

int Fixed::toInt(void) const {
    return this->fixed_value >> this->fractional_bits;
}

int Fixed::getRawBits(void) const{
    return this->fixed_value;
}

int Fixed::setRawBits(int const raw){
    this->fixed_value = raw;
    return this->fixed_value;
}

