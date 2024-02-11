/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:56:29 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/17 19:57:33 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("default"), gradesign(150), gradeexec(150){
    isigned = false;
    std::cout << "Form " << name << " created" << std::endl;
}

Form::Form(std::string name, int gradesign, int gradeexec) : name(name), gradesign(gradesign), gradeexec(gradeexec){
    isigned = false;
    if (gradesign < 1 || gradeexec < 1)
        throw Form::GradeTooHighException();
    else if (gradesign > 150 || gradeexec > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form " << name << " created" << std::endl;
}

Form::Form(Form const &src) : name(src.name), gradesign(src.gradesign), gradeexec(src.gradeexec){
    *this = src;
}

Form::~Form(void){
    std::cout << "Form " << name << " destroyed" << std::endl;
}

Form &Form::operator=(Form const &src){
    if (this != &src)
        this->isigned = src.isigned;
    return *this;
}

std::string Form::getName(void) const{
    return name;
}

bool Form::getIsigned(void) const{
    return isigned;
}

int Form::getGradeSign(void) const{
    return gradesign;
}

int Form::getGradeExec(void) const{
    return gradeexec;
}

void Form::beSigned(Bureaucrat &src){
    if (src.getGrade() > gradesign)
        throw Form::GradeTooLowException();
    else
        isigned = true;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Form const &src){
    out << "Form             : " << src.getName() << std::endl
        << "Grade to sign    : " << src.getGradeSign() << std::endl
        << "Grade to execute : " << src.getGradeExec() << std::endl
        << "Signed           : " << (src.getIsigned() ? "yes" : "no");
    return out;
    // out << "Form " << src.getName() << " is " << (src.getIsigned() ? "signed" : "not signed") << " and requires grade " << src.getGradeSign() << " to be signed and grade " << src.getGradeExec() << " to be executed";
    // return out;
}
