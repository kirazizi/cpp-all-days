/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:19:24 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/04 16:09:10 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>

class PmergeMe_vec {
    private:
        std::vector<int> input_vec;
    public:
        PmergeMe_vec(void);
        ~PmergeMe_vec(void);
        PmergeMe_vec(PmergeMe_vec const &src);
        PmergeMe_vec &operator=(PmergeMe_vec const &src);
        
        int main_vector(int ac, char **av);

};

class PmergeMe_deq {
    private:
        std::deque<int> input_deq;
    public:
        PmergeMe_deq(void);
        ~PmergeMe_deq(void);
        PmergeMe_deq(PmergeMe_deq const &src);
        PmergeMe_deq &operator=(PmergeMe_deq const &src);
        
        int main_deque(int ac, char **av);

};

int check_value(std::string value);
long long int jacobsthal(int nb);


#endif