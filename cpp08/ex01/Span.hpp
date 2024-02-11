/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:22:27 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/28 16:06:10 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span {
    private:
        Span(void);
        unsigned int n;
        std::vector<int> vec;
    public:
        Span(unsigned int n);
        Span(Span const &src);
        ~Span(void);
        Span &operator=(Span const &src);

        void addNumber(int number);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif