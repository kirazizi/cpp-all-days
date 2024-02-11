/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:22:25 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/28 16:09:55 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void){
}

Span::Span(unsigned int n){
    this->n = n;
}

Span::Span(Span const &src){
    *this = src;
}

Span::~Span(void){
}

Span &Span::operator=(Span const &src){
    this->n = src.n;
    this->vec = src.vec;
    return *this;
}

void Span::addNumber(int number){
    if (this->vec.size() < this->n)
        this->vec.push_back(number);
    else
        throw std::exception();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if (this->vec.size() + std::distance(begin, end) > this->n)
        throw std::exception();
    else
        this->vec.insert(this->vec.end(), begin, end);
}

int Span::longestSpan(void){
    if (this->vec.size() < 2)
        throw std::exception();
    std::vector<int> tmp = this->vec;
    std::sort(tmp.begin(), tmp.end());
    int max = tmp.back() - tmp.front();
    return max;
}

int Span::shortestSpan(void){
    if (this->vec.size() < 2)
        throw std::exception();
    std::vector<int> tmp = this->vec;
    std::vector<int>::iterator it;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp.back() - tmp.front();
    for (it = tmp.begin() +1; it != tmp.end(); it++){
        if (*it - *(it - 1) < min)
            min = *it - *(it - 1);
    }
    return min;
}
