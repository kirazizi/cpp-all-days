/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:22:05 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/18 19:31:33 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Default Target", 72, 45){
    this->target = "Default Target";
    std::cout << "RobotomyRequestForm " << getName() << " created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){
    this->target = target;
    std::cout << "RobotomyRequestForm " << getName() << " created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src){
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void){    
    std::cout << "RobotomyRequestForm " << getName() << " destroyed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
    if (this != &src)
        this->target = src.target;
    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const{
    return target;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > getGradeExec())
        throw GradeTooLowException();
    else{
        std::cout << "************* drilling noises *************" << std::endl;
        if (std::time(NULL) % 2)
            std::cout << getTarget() << " has been robotomized successfully" << std::endl;
        else
            std::cout << getTarget() << " robotomization failed" << std::endl;
    }
}
