/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:34 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/17 16:41:29 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>

T max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif