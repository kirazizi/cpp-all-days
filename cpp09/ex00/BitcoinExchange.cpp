/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:35:59 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/05 15:10:03 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src){
    *this = src;
}

BitcoinExchange::~BitcoinExchange(void){
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src){
    if (this != &src){
        this->map = src.map;
    }
    return *this;
}

int is_digit(std::string value){
    int i = 0;
    int dot = 0;
    if (value[i] == '+' || value[i] == '-'){
        if (value[i] == '-')
            std::cout << "Error: not a positive number." << std::endl;
        else
            std::cout << "Error: bad value." << std::endl;
        return 0;
    }
    if (value[i] == '.'){
        std::cout << "Error: bad value." << std::endl;
        return 0;
    }
    while (value[i]){
        if (value[i] == '.'){
            i++;
            dot++;
        }
        if (!isdigit(value[i]) || dot > 1){
            std::cout << "Error: bad value." << std::endl;
            return 0;
        }
        i++;
    }
    return 1;
}

void BitcoinExchange::print_the_value(std::string date, std::string value){
    std::map<std::string, double >::iterator it;
    double new_value = std::stod(value);
    it = map.upper_bound(date);
    if (it != map.end()){
        std::cout << date << " => " << new_value << " = " << new_value * (--it)->second << std::endl;
    }
    else{
        std::cout << date << " => " << new_value << " = " << new_value * (--it)->second << std::endl;
    }
}

bool check_value(std::string value){
    if (value.empty())
        return false;
    if (!is_digit(value))
        return false;
    if (std::stod(value) > INT_MAX){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool isleap(int year){
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    if (year % 400 == 0)
        return true;
    return false;
}

bool check_date(std::string date){
    
    if (date.size() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 10; i++){
        if (i != 4 && i != 7){
            if (date[i] < '0' || date[i] > '9')
                return false;
        }
    }

    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);

    int y = std::stoi(year);
    int m = std::stoi(month);
    int d = std::stoi(day);

    if (y < 2009 || y > 9999)
        return false;
    if (m < 1 || m > 12)
        return false;
    if (d < 1 || d > 31)
        return false;
    if (m == 2){
        if (isleap(y)){
            if (d > 29)
                return false;
        }
        else{
            if (d > 28)
                return false;
        }
    }
    return true;
}

void BitcoinExchange::split_line(std::string data){
    size_t pos = data.find(" | ");
    if (pos != std::string::npos){
        std::string date = data.substr(0, pos);
        std::string value = data.substr(pos + 3);
        if (date.empty() || value.empty())
            std::cout << "Error: bad input" << std::endl;
        else{
            if (!check_date(date)){
                std::cout << "Error: bad date." << std::endl;
                return ;
            }
            else if (!check_value(value)){
                return ;
            }
            print_the_value(date, value);
        }
    }
    else{
        std::cout << "Error: bad input =>" << data << std::endl;
        return ;
    }
}

void BitcoinExchange::fillmap(std::string buff2){
    std::string key;
    std::string value;
    int i = 0;

    while (buff2[i] != ','){
        key += buff2[i];
        i++;
    }
    i++;
    while(buff2[i] != '\n'){
        value += buff2[i];
        i++;
    }
    if (key != "date" || value != "exchange_rate"){
        std::cout << "Error: invalid file." << std::endl;
        return ;
    }
    i++;
    int flg = 1;
    key.clear();
    value.clear();
    
    while (buff2[i] != '\0'){
        while (buff2[i] != ','){
            key += buff2[i];
            i++;
        }
        i++;
        while (buff2[i] != '\n'){
            value +=buff2[i];
            i++;
        }
        if (flg){
            map["0"] = std::stod(value);
            flg = 0;
        }
        map[key] = std::stod(value);
        key.clear();
        value.clear();
        i++;
    }
}