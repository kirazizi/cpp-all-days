/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:31:17 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/19 15:10:30 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    try{
        Bureaucrat B1("B1", 1);
        Intern randomIntern;
        AForm *f1 = randomIntern.makeForm("shrubbery creation", "kira");

        B1.signForm(*f1);
        B1.executeForm(*f1);

        delete f1;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout <<  "--------------------------------------------" << std::endl;

    try{
        Bureaucrat B2("B2", 150);
        Intern randomIntern;
        AForm *f2 = randomIntern.makeForm("Name Not Exist", "kira");
    
        B2.signForm(*f2);
        B2.executeForm(*f2);

        delete f2;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}