/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:43:41 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/24 11:42:51 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace(void);
        void replace(void);
};

#endif