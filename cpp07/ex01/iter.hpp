/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:21:01 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/20 15:16:35 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename T2>

void iter(T *arr, int len, void (*fun)(T2 value)){
    for (int i = 0; i < len; i++){
        fun(arr[i]);
    }
}

#endif