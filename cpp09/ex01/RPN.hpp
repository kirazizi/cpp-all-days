/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:16:35 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/01 18:39:58 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

class RPN
{
    private:
        std::stack<double> stack;
    public:
        RPN(void);
        RPN(std::string str);
        RPN(RPN const &src);
        ~RPN(void);
        RPN &operator=(RPN const &src);
        
        int check_input(std::string input);
        int to_stack(std::string ress, int flg);
};

#endif