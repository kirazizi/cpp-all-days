/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:04:55 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/19 13:45:47 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        std::string const name;
        bool              isigned;
        int const         gradesign;
        int const         gradeexec;
    public:
        AForm(void);
        AForm(std::string name, int gradesign, int gradeexec);
        AForm(AForm const &src);
        virtual ~AForm(void);
        
        AForm &operator=(AForm const &src);
        
        std::string getName(void) const;
        bool        getIsigned(void) const;
        int         getGradeSign(void) const;
        int         getGradeExec(void) const;
        void        beSigned(Bureaucrat &src);
        virtual void    execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, AForm const &src);

#endif