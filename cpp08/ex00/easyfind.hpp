/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:13:24 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/28 17:02:29 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T &container, int n)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return *it;
    else
        throw std::exception();
}

#endif