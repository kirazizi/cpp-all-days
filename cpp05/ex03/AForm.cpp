/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:05:01 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/18 17:15:50 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("default"), gradesign(150), gradeexec(150){
    isigned = false;
    std::cout << "AForm " << name << " created" << std::endl;
}

AForm::AForm(std::string name, int gradesign, int gradeexec) : name(name), gradesign(gradesign), gradeexec(gradeexec){
    isigned = false;
    if (gradesign < 1 || gradeexec < 1)
        throw AForm::GradeTooHighException();
    else if (gradesign > 150 || gradeexec > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm " << name << " created" << std::endl;
}

AForm::AForm(AForm const &src) : name(src.name), gradesign(src.gradesign), gradeexec(src.gradeexec){
    *this = src;
}

AForm::~AForm(void){
    std::cout << "AForm " << name << " destroyed" << std::endl;
}

AForm &AForm::operator=(AForm const &src){
    if (this != &src)
        this->isigned = src.isigned;
    return *this;
}

std::string AForm::getName(void) const{
    return name;
}

bool AForm::getIsigned(void) const{
    return isigned;
}

int AForm::getGradeSign(void) const{
    return gradesign;
}

int AForm::getGradeExec(void) const{
    return gradeexec;
}

void AForm::beSigned(Bureaucrat &src){
    if (src.getGrade() > gradesign)
        throw AForm::GradeTooLowException();
    else
        isigned = true;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw(){
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, AForm const &src){
    out << "AForm             : " << src.getName() << std::endl
        << "Grade to sign    : " << src.getGradeSign() << std::endl
        << "Grade to execute : " << src.getGradeExec() << std::endl
        << "Signed           : " << (src.getIsigned() ? "yes" : "no");
    return out;
}
