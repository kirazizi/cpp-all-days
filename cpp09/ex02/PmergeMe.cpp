/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:56:08 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/03 22:07:45 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe_vec::PmergeMe_vec(void) {
}

PmergeMe_vec::~PmergeMe_vec(void) {
}

PmergeMe_vec::PmergeMe_vec(PmergeMe_vec const &src) {
    *this = src;
}

PmergeMe_vec &PmergeMe_vec::operator=(PmergeMe_vec const &src) {
    this->input_vec = src.input_vec;
    return *this;
}

PmergeMe_deq::PmergeMe_deq(void) {
}

PmergeMe_deq::~PmergeMe_deq(void) {
}

PmergeMe_deq::PmergeMe_deq(PmergeMe_deq const &src) {
    *this = src;
}

PmergeMe_deq &PmergeMe_deq::operator=(PmergeMe_deq const &src) {
    this->input_deq = src.input_deq;
    return *this;
}

long long int jacobsthal(int nb){
    if (nb == 0) return 0;
    if (nb == 1) return 1;

    long long int prev = 0;
    long long int current = 1;

    for (int i = 2; i <= nb; i++) {
        long long int temp = current;
        current += (prev * 2);
        prev = temp;
    }
    return current;
}

int check_value(std::string value){
    int i = 0;
    while(value[i]){
        if (!isdigit(value[i])){
            return 0;
        }
        i++;
    }
    return 1;
}