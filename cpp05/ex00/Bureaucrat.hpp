/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:31:19 by sbzizal           #+#    #+#             */
/*   Updated: 2023/12/17 16:37:13 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat {
    private:
        std::string const name;
        int               grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(void);

        Bureaucrat &operator=(Bureaucrat const &src);

        std::string getName(void) const;
        int         getGrade(void) const;
        void        incrementGrade(void);
        void        decrementGrade(void);
    
        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
    
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);

#endif