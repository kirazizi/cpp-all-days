/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:19 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/26 15:24:15 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack(void){}
        MutantStack(MutantStack const &src){
            *this = src;
        }
        ~MutantStack(void){}
        MutantStack &operator=(MutantStack const &src){
            if (this != &src)
                std::stack<T>::operator=(src);
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator Myiterator;
        Myiterator begin(void){
            return (std::stack<T>::c.begin());
        }
        Myiterator end(void){
            return (std::stack<T>::c.end());
        }
        Myiterator rbegin(void){
            return (std::stack<T>::c.rbegin());
        }
        Myiterator rend(void){
            return (std::stack<T>::c.rend());
        }
};

#endif