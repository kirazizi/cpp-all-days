/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:31:17 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/18 12:28:20 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// if(std::time(NULL) % 2){
//     // success
// } else {
//     // failure
// }
    
int main(){    
    try{
        Bureaucrat B("B1", 1);
        Form F("F1", 2, 2);

        std::cout << B << std::endl;
        B.signForm(F);
        std::cout << F << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************************" << std::endl;

    try{
        Bureaucrat B("B2", 2);
        Form F("F2", 1, 1);

        std::cout << B << std::endl;
        B.signForm(F);
        std::cout << F << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}