/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:43:38 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/24 11:48:35 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2){
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

Replace::~Replace(void){
}

void Replace::replace(void){
    
    std::string str;
    std::string joined;
    std::string result;

    std::fstream file;

    file.open(this->filename, std::ios::in);
    if (file.is_open()){
        while(std::getline(file, str)){
            joined += str;
            if (!file.eof())
                joined += "\n";
        }
        file.close();
    }
    else{
        std::cout << "Error: " << this->filename << " does not exist." << std::endl;
        return ;
    }
    
    size_t pos = 0;
    while(pos < joined.length()){
        size_t found = joined.find(this->s1, pos);
        if (found != std::string::npos){
            result += joined.substr(pos, found - pos);
            result += this->s2;
            pos = found + this->s1.length();
        }
        else{
            result += joined.substr(pos);
            break;
        }
    }

    this->filename += ".replace";
    file.open(this->filename, std::ios::out);
    if(file.is_open()){
        file << result;
        file.close();
    }
    else
        std::cout << "Error:" << this->filename << ".replace" << "fail to creat." << std::endl;
}
