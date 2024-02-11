/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:38:18 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/17 19:26:43 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const name;
        bool              isigned;
        int const         gradesign;
        int const         gradeexec;
    public:
        Form(void);
        Form(std::string name, int gradesign, int gradeexec);
        Form(Form const &src);
        ~Form(void);
        
        Form &operator=(Form const &src);
        
        std::string getName(void) const;
        bool        getIsigned(void) const;
        int         getGradeSign(void) const;
        int         getGradeExec(void) const;
        void        beSigned(Bureaucrat &src);

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Form const &src);

#endif