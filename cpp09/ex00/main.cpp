/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:35:55 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/05 13:56:13 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool check_header(std::string data){
    size_t pos = data.find(" | ");
    if (pos != std::string::npos){
        std::string date = data.substr(0, pos);
        std::string value = data.substr(pos + 3);
    if (date == "date" && value == "value")
        return true;
    }
    return false;
}

std::string name_input(std::string input){
    int len = input.size();
    if (input[len - 4] == '.' && input[len - 3] == 'c' && input[len - 2] == 's' && input[len - 1] == 'v'){
        return input;
    }
    else{
        std::cout << "Error: bad file extension." << std::endl;
        return "";
    }
}

int main(int ac, char **av)
{
    BitcoinExchange btc;
    static int flg = 0;
    if (ac != 2){
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::ifstream csv("data.csv");
    if (!csv.is_open()){
        std::cout << "Error: could not open file." << std::endl;
            return (1);
    }

    if (csv.peek() == std::ifstream::traits_type::eof()){
        std::cout << "Error: data file is empty." << std::endl;
        return (1);
    }

    std::string tmp;
    std::string buff;
    while (std::getline(csv, tmp)){
        buff += tmp;
        if (!csv.eof())
            buff += '\n';
    }
    btc.fillmap(buff);

    std::string input = name_input(av[1]);
    if (input.empty()){
        return (1);
    }
    std::ifstream file(input);
    if (!file.is_open()){
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    
    if (file.peek() == std::ifstream::traits_type::eof()){
        std::cout << "Error: input file is empty." << std::endl;
        return (1);
    }

    std::string line;
    std::string data;
    while (std::getline(file, line)){
        if (flg == 0){
            if (!check_header(line)){
                std::cout << "Error: bad header" << std::endl;
                return (1);
            }
            flg = 1;
        }
        else
            btc.split_line(line);
        data += line;
        if (!file.eof())
            data += '\n';
    }
    csv.close();
    file.close();
}