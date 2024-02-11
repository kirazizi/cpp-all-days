/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:43:11 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/24 11:42:44 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av){
    std::string filename;
    std::string s1;
    std::string s2;

    if (ac != 4){
        std::cout << "./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    
    if (s1.empty() || s2.empty()){
        std::cout << "Error: s1 or s2 is empty." << std::endl;
        return (1);
    }
    if (filename.empty()){
        std::cout << "Error: filename is empty." << std::endl;
        return (1);
    }
    
    Replace rep(filename, s1, s2);
    rep.replace();
}