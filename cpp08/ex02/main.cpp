/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:14 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/27 11:31:27 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
    
        std::cout << "top: " << mstack.top() << std::endl;
    
        mstack.pop();
    
        std::cout << "size: " << mstack.size() << std::endl;
    
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
    
        MutantStack<int>::Myiterator it = mstack.begin();
        MutantStack<int>::Myiterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "iterator: " << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "---------------------" << std::endl;
    {
        std::vector<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        
        std::cout << "top: " << mstack.back() << std::endl;
        
        mstack.pop_back();
    
        std::cout << "size: " << mstack.size() << std::endl;
        
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        
        std::vector<int>::iterator it = mstack.begin();
        std::vector<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "iterator: " << *it << std::endl;
            ++it;
        }
    }
}
