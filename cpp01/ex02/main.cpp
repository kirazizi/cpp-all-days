/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:28:11 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/24 12:37:32 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;
	
	std::cout << "address of string    : " << &name << std::endl;
	std::cout << "address of stringPTR : " << stringPTR << std::endl;
	std::cout << "address of stringREF : " << &stringREF << std::endl;
	
	std::cout << "value of string      : " << name << std::endl;
	std::cout << "value of stringPTR   : " << *stringPTR << std::endl;
	std::cout << "value of stringREF   : " << stringREF << std::endl;
}
