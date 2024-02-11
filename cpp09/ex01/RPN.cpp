/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:16:33 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/05 19:29:02 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){
}

RPN::RPN(RPN const &src){
    *this = src;
}

RPN::~RPN(void){
}

RPN &RPN::operator=(RPN const &src){
    if (this != &src){
        this->stack = src.stack;
    }
    return *this;
}

bool is_digit(char c){
    if ((c >= '0' && c <= '9') || c == '-' || c == '+' 
        || c == '*' || c == '/')
        return true;
    return false;
}

int check_ress(std::string ress){
    if (ress.length() != 1 || !is_digit(ress[0]))
        return 1;
    return 0;
}

int RPN::to_stack(std::string ress, int flg){
    if (flg == 0){
        double str = std::stod(ress);
            stack.push(str);
    }
    else if (flg == 1){
        if (stack.size() < 2){
                std::cout << "Error" << std::endl;
                return 1;
        }
        double first = stack.top();
        stack.pop();
        double secend = stack.top();
        stack.pop();
        double res = 0;
        if (ress[0] == '+')
            res = secend + first;
        else if (ress[0] == '-')
            res = secend - first;
        else if (ress[0] == '*')
            res = secend * first;
        else if (ress[0] == '/'){
            res = secend / first;
        }
        stack.push(res);
    }
    return 0;
}

int RPN::check_input(std::string input){
    std::stringstream ss(input);
    std::string ress;

    while(getline(ss, ress, ' ')){
        if (check_ress(ress)){
            std::cout << "Error" << std::endl;
            return 1;
        }
        if(isdigit(ress[0])){
            if (to_stack(ress, 0))
                return 1;
        }
        else{
            if (to_stack(ress, 1))
                return 1;
        }
    }
    if (stack.size() != 1){
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::cout << stack.top() << std::endl;
    return 0;
}

