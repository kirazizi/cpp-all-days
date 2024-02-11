/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:05:56 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/29 15:16:33 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					fixed_value;
		static const int	fractional_bits;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const nb);
		Fixed(float const nb);
		~Fixed(void);

		Fixed &operator=(Fixed const &src); // assignation operator
		
		int   getRawBits(void) const;
		int   setRawBits(int const raw);
		float toFloat(void) const;
		int   toInt(void) const;
	
};

std::ostream &operator<<(std::ostream &os, Fixed const &obj); // insertion operator

#endif