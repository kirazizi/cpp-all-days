/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:33:17 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/18 19:23:54 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Default Target", 145, 137){
    this->target = "Default Target";
    std::cout << "ShrubberyCreationForm " << getName() << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137){
    this->target = target;
    std::cout << "ShrubberyCreationForm " << getName() << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src){
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){    
    std::cout << "ShrubberyCreationForm " << getName() << " destroyed" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
    if (this != &src)
        this->target = src.target;
    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const{
    return target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > getGradeExec())
        throw GradeTooLowException();
    else{
        std::string filename = getTarget() + "_shrubbery";
        std::ofstream ofs(filename);
        ofs << "       _-_" << std::endl;
        ofs << "    /~~   ~~\\" << std::endl;
        ofs << " /~~         ~~\\" << std::endl;
        ofs << "{               }" << std::endl;
        ofs << " \\  _-     -_  /" << std::endl;
        ofs << "   ~  \\\\ //  ~" << std::endl;
        ofs << "_- -   | | _- _" << std::endl;
        ofs << "  _ -  | |   -_" << std::endl;
        ofs << "      // \\\\" << std::endl;
        ofs << std::endl;
    }
}

