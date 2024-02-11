/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:17:23 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/16 11:05:07 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){
}

ScalarConverter::ScalarConverter(ScalarConverter const &src){
    *this = src;
}

ScalarConverter::~ScalarConverter(void){
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src){
    if (this != &src)
        return *this;
    return *this;
}

int is_digit(std::string input){
    int i = 0;
    int dot = 0;
    if (input[i] == '+' || input[i] == '-')
        i++;
    if (input[i] == '.')
        return 0;
    while (input[i]){
        if (input[i] == '.'){
            i++;
            dot++;
        }
        if (input[i] == 'f' && input[i + 1] == '\0' && dot == 1){
            return 1;
        }
        if (!isdigit(input[i]) || dot > 1)
            return 0;
        i++;
    }
    return 1;
}

int pars_input(std::string input){
    int lingth = input.length();
    if (lingth -1 == 'f' && isdigit(input[lingth - 2]))
        return 0;
    return 1;
}

void print_char(char c){
    if (c < 0 || c > 127)
        std::cout << "char:   impossible" << std::endl;
    else if (c < 32 || c > 126)
        std::cout << "char:   Non displayable" << std::endl;
    else
        std::cout << "char:   " << c << std::endl;
}

void print_int(int i){
    if (i < -2147483648 || i > 2147483647)
        std::cout << "int:    impossible" << std::endl;
    else
        std::cout << "int:    " << i << std::endl;
}

void print_float(float f){
    if (f - static_cast<int>(f) == 0)
        std::cout << "float:  " << static_cast<int>(f) << ".0f" << std::endl;
    else
        std::cout << "float:  " << f << "f" << std::endl;
}

void print_double(double d){
    if (d - static_cast<int>(d) == 0)
        std::cout << "double: " << static_cast<int>(d) << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

char cnv_char(std::string str){
    int i = std::atoi(str.c_str());
    return static_cast<char>(i);
}

int cnv_int(std::string str){
    float i = std::atof(str.c_str());
    return static_cast<int>(i);
}

float cnv_float(std::string str){
    float f = std::atof(str.c_str());
    return static_cast<float>(f);
}

double cnv_double(std::string str){
    float d = std::atof(str.c_str());
    return static_cast<double>(d);
}

void ScalarConverter::convert(std::string input){
    if (input.length() == 1 && !isdigit(input[0])){
        std::cout << "char:   " << input[0] << std::endl;
        std::cout << "int:    " << static_cast<int>(input[0]) << std::endl;
        std::cout << "float:  " << static_cast<float>(input[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
    }
    else if (input == "-inf" || input == "+inf" || input == "-inff" || input == "+inff"){
        std::cout << "char:   impossible" << std::endl;
        std::cout << "int:    impossible" << std::endl;
        std::cout << "float:  " << input[0] << "inff" <<  std::endl;
        std::cout << "double: " << input[0] << "inf" <<  std::endl;
    }
    else if (input == "nan" || input == "nanf"){
        std::cout << "char:   impossible" << std::endl;
        std::cout << "int:    impossible" << std::endl;
        std::cout << "float:  nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (is_digit(input) == 0){
        std::cout << "Error, bad input" << std::endl;
        return ;
    }
    else {
        print_char(cnv_char(input));
        print_int(cnv_int(input));
        print_float(cnv_float(input));
        print_double(cnv_double(input));
    }
}
