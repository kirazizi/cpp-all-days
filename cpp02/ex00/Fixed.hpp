/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:48:07 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/04 12:11:44 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private:
		int 			 fixed_value;
		static const int fractional_bits;

	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &cp);

		int  getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif
