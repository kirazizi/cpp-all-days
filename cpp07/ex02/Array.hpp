/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:20:45 by sbzizal           #+#    #+#             */
/*   Updated: 2024/01/20 15:27:36 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>

template <typename T>

class Array{
    private:
        T *array;
        unsigned int arr_size;
    public:
        Array(void){
            this->array = NULL;
            this->arr_size = 0;
        };

        Array(unsigned int size){
            this->arr_size = size;
            this->array = new T[size];
        };

        Array(Array const &src){
            this->array = NULL;
            *this = src;
        };

        ~Array(void){
            if (this->array != NULL)
                delete [] this->array;
        };

        Array &operator=(Array const &src){
            if (this != &src){
                if (this->array != NULL)
                    delete [] this->array;
                this->arr_size = src.size();
                this->array = new T[this->arr_size];
                for (unsigned int i = 0; i < this->arr_size; i++)
                    this->array[i] = src.array[i];
            }
            return *this;
        };

        T &operator[](unsigned int i){
            if (i >= this->arr_size)
                throw std::exception();
            return this->array[i];
        };

        unsigned int size(void) const {
            return this->arr_size;
        };
};

#endif