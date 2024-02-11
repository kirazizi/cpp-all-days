/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:53:37 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/19 13:37:35 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        Intern(void);
        Intern(Intern const &src);
        Intern &operator=(Intern const &src);
        ~Intern(void);
        
        AForm *makeForm(std::string formName, std::string target);
        
        AForm *makeShrubberyCreationForm(std::string target);
        AForm *makeRobotomyRequestForm(std::string target);
        AForm *makePresidentialPardonForm(std::string target);
        
    class FormNotFoundException : public std::exception{
        virtual const char *what() const throw();
    };
};

#endif