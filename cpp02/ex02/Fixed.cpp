/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:56:24 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/04 14:28:21 by sbzizal          ###   ########.fr       */
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

Fixed Fixed::operator+(Fixed const &src){
    Fixed res;
    res.setRawBits(this->fixed_value + src.getRawBits());
    return res;
}

Fixed Fixed::operator-(Fixed const &src){
    Fixed res;
    res.setRawBits(this->fixed_value - src.getRawBits());
    return res;
}

Fixed Fixed::operator*(Fixed const &src){
    Fixed res(this->toFloat() * src.toFloat());
    return res;
}

Fixed Fixed::operator/(Fixed const &src){
    Fixed res(this->toFloat() / src.toFloat());
    return res;
}

bool  Fixed::operator>(Fixed const &src) const{
    return this->fixed_value > src.getRawBits();
}

bool  Fixed::operator<(Fixed const &src) const{
    return this->fixed_value < src.getRawBits();
}

bool  Fixed::operator>=(Fixed const &src) const{
    return this->fixed_value >= src.getRawBits();
}

bool  Fixed::operator<=(Fixed const &src) const{
    return this->fixed_value <= src.getRawBits();
}

bool  Fixed::operator==(Fixed const &src) const{
    return this->fixed_value == src.getRawBits();
}

bool  Fixed::operator!=(Fixed const &src) const{
    return this->fixed_value != src.getRawBits();
}

Fixed &Fixed::operator++(void){
    this->fixed_value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp;
    tmp = *this;
    this->fixed_value++;
    return tmp;
}

Fixed &Fixed::operator--(void){
    this->fixed_value--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp;
    tmp = *this;
    this->fixed_value--;
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a > b)
        return a;
    return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b){
    if (a < b)
        return a;
    return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b){
    if (a > b)
        return a;
    return b;
}
