/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:56:37 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/19 14:32:27 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){
}

Intern::Intern(Intern const &src){
    *this = src;
}

Intern &Intern::operator=(Intern const &src){
    (void)src;
    return *this;
}

Intern::~Intern(void){
}

const char *Intern::FormNotFoundException::what() const throw(){
    return "Form Not Found";
}

AForm *Intern::makeShrubberyCreationForm(std::string target){
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target){
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string target){
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target){
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    AForm *(Intern::*ptr[3])(std::string target) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm};

    for (int i = 0; i < 3; i++){
        if (formName == formNames[i]){
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*ptr[i])(target);
        }
    }
    throw FormNotFoundException();
}

// AForm *Intern::makeForm(std::string formName, std::string target){
//     std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
//     // AForm *Form = NULL;
//     AForm *(Intern::*f[3])(std::string) = {
//         &Intern::makeShrubberyCreationForm,
//         &Intern::makeRobotomyRequestForm,
//         &Intern::makePresidentialPardonForm
//     }; 
    // for(int i = 0; i < 3; i++){
    //     if(formName == formNames[i]){
    //         std::cout << "Intern creates " << formName << std::endl;
    //         switch(i){
    //             case 0:
    //                 Form = new ShrubberyCreationForm(target);
    //                 break;
    //             case 1:
    //                 Form = new RobotomyRequestForm(target);
    //                 break;
    //             case 2:
    //                 Form = new PresidentialPardonForm(target);
    //                 break;
    //         }
    //     }
    // }
    // if(Form == NULL || formName.empty() || target.empty())
    //     std::cout << "Intern can't create " << formName << std::endl;
    // return Form;
// }