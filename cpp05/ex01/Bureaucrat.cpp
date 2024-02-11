/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:31:24 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/17 19:59:01 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("default"), grade(150){
    std::cout << "Bureaucrat " << name << " created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
    std::cout << "Bureaucrat " << name << " created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name){
    *this = src;
}

Bureaucrat::~Bureaucrat(void){
    std::cout << "Bureaucrat " << name << " destroyed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src){
    if (this != &src)
        this->grade = src.grade;
    return *this;
}

std::string Bureaucrat::getName(void) const{
    return name;
}

int Bureaucrat::getGrade(void) const{
    return grade;
}

void Bureaucrat::incrementGrade(void){
    if (grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade(void){
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src){
    out << src.getName() << ", bureaucrat grade " << src.getGrade();
    return out;
}

void Bureaucrat::signForm(Form &form){
    try {
        form.beSigned(*this);
        std::cout << this->name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
    // if (form.getIsigned() == true){
    //     std::cout << this->name << " signs " << name << std::endl;
    // }
    // else
    //     std::cout << this->name << " cannot sign " << name << " because " << this->name << " is not signed" << std::endl;
}
