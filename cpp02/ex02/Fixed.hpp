/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:58:06 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/04 12:12:43 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    private:
        int                 fixed_value;
        static const int    fractional_bits;
    
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        Fixed(int const nb);
        Fixed(float const nb);
        ~Fixed(void);

        Fixed &operator=(Fixed const &src); // assignation operator
        Fixed operator+(Fixed const &src); // addition operator
        Fixed operator-(Fixed const &src); // substraction operator
        Fixed operator*(Fixed const &src); // multiplication operator
        Fixed operator/(Fixed const &src); // division operator
        
        bool  operator>(Fixed const &src) const; // greater than operator
        bool  operator<(Fixed const &src) const; // less than operator
        bool  operator>=(Fixed const &src) const; // greater than or equal to operator
        bool  operator<=(Fixed const &src) const; // less than or equal to operator
        bool  operator==(Fixed const &src) const; // equal to operator
        bool  operator!=(Fixed const &src) const; // not equal to operator

        Fixed &operator++(void); // pre-increment operator
        Fixed &operator--(void); // pre-decrement operator
        Fixed operator++(int); // post-increment operator
        Fixed operator--(int); // post-decrement operator

        static Fixed &min(Fixed &a, Fixed &b); // min function
        static Fixed &max(Fixed &a, Fixed &b); // max function
        static Fixed const &min(Fixed const &a, Fixed const &b); // min function
        static Fixed const &max(Fixed const &a, Fixed const &b); // max function

        
        int   getRawBits(void) const;
        int   setRawBits(int const raw);
        float toFloat(void) const;
        int   toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &obj); // insertion operator

#endif