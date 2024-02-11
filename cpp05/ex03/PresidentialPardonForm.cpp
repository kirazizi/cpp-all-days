/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:32:56 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/18 19:35:24 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Default Target", 25, 5){
    this->target = "Default Target";
    std::cout << "PresidentialPardonForm " << getName() << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){
    this->target = target;
    std::cout << "PresidentialPardonForm " << getName() << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src){
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void){    
    std::cout << "PresidentialPardonForm " << getName() << " destroyed" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
    if (this != &src)
        this->target = src.target;
    return *this;
}

std::string PresidentialPardonForm::getTarget(void) const{
    return target;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > getGradeExec())
        throw GradeTooLowException();
    else
        std::cout << "Informs that " << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

