/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:31:17 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/19 11:41:52 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){    
    try{
        Bureaucrat B1("B1", 1);
        ShrubberyCreationForm SF1("SF1");
        RobotomyRequestForm RF1("RF1");
        PresidentialPardonForm PF1("PF1");

        B1.signForm(SF1);
        B1.executeForm(SF1);
        std::cout << std::endl;
        B1.signForm(RF1);
        B1.executeForm(RF1);
        std::cout << std::endl;
        B1.signForm(PF1);
        B1.executeForm(PF1);
        std::cout << std::endl;
        
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout <<  "--------------------------------------------" << std::endl;
    try{
        Bureaucrat B2("B2", 150);
        ShrubberyCreationForm SF2("SF2");
        RobotomyRequestForm RF2("RF2");
        PresidentialPardonForm PF2("PF2");

        B2.signForm(SF2);
        B2.executeForm(SF2);
        std::cout << std::endl;
        B2.signForm(RF2);
        B2.executeForm(RF2);
        std::cout << std::endl;
        B2.signForm(PF2);
        B2.executeForm(PF2);
        std::cout << std::endl;
         
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}