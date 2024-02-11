/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:52:48 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/16 11:06:22 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter(void);
    public:
        ScalarConverter(ScalarConverter const &src);
        ~ScalarConverter(void);
        ScalarConverter &operator=(ScalarConverter const &src);
        static void convert(std::string input);
};

#endif
