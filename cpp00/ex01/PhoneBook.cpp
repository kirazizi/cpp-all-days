/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:34:02 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/25 10:35:03 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

}

PhoneBook::~PhoneBook(void){

}

int    PhoneBook::fill_contact(int index){

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    if(std::cin.eof())
        return -1;
    this->arr_contact[index].set_first_name(first_name);

    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    if(std::cin.eof())
        return -1;
    this->arr_contact[index].set_last_name(last_name);

    std::cout << "Nick name: ";
    std::getline(std::cin, nickname);
    if(std::cin.eof())
        return -1;
    this->arr_contact[index].set_nickname(nickname);

    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);
    if(std::cin.eof())
        return -1;
    this->arr_contact[index].set_phone_number(phone_number);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);
    if(std::cin.eof())
        return -1;
    this->arr_contact[index].set_darkest_secret(darkest_secret);

    if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty()){
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    else{
        this->arr_contact[index].set_flg(index);
        std::cout << "Contact added" << std::endl;
    }
    return 0;
}

int PhoneBook::search_id(void){
    
    if (this->arr_contact[0].get_flg() == -1){
        return 1;
    }
    std::string id;
    std::cout << "Please enter an id: ";
    std::getline(std::cin, id);
    if (std::cin.eof())
        return -1;
    if (id.length() == 1 && id[0] >= '0' && id[0] <= '7')
    {
        if (this->arr_contact[(id[0] - 48)].get_flg() == -1){
            std::cout << "id not found" << std::endl;
            return 1;
        }
        std::cout << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "First name    : " << this->arr_contact[(id[0] - 48)].get_first_name() << std::endl;
        std::cout << "Last name     : " << this->arr_contact[(id[0] - 48)].get_last_name() << std::endl;
        std::cout << "Nick name     : " << this->arr_contact[(id[0] - 48)].get_nickname() << std::endl;
        std::cout << "Phone number  : " << this->arr_contact[(id[0] - 48)].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << this->arr_contact[(id[0] - 48)].get_darkest_secret() << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << std::endl;
    }
    else
        std::cout << "Invalid id" << std::endl;
    return 0;
}

void PhoneBook::search_contact(void){

    std::string new_first_name;
    std::string new_last_name;
    std::string new_nickname;
    std::string new_phone_number;
    std::string new_darkest_secret;

    if (this->arr_contact[0].get_flg() == -1){
        std::cout << "No contact found" << std::endl;
        return;
    }

    std::cout << std::setw(10) << "id" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (this->arr_contact[i].get_flg() == -1)
            break;
        std::cout << std::setw(10) << i << "|";

        new_first_name = this->arr_contact[i].get_first_name();
        if (new_first_name.length() > 10)
            new_first_name = new_first_name.substr(0, 9) + ".";
        std::cout << std::setw(10) << new_first_name << "|";
    
        new_last_name = this->arr_contact[i].get_last_name();
        if (new_last_name.length() > 10)
            new_last_name = new_last_name.substr(0, 9) + ".";
        std::cout << std::setw(10) << new_last_name << "|";
    
        new_nickname = this->arr_contact[i].get_nickname();
        if (new_nickname.length() > 10)
            new_nickname = new_nickname.substr(0, 9) + ".";
        std::cout << std::setw(10) << new_nickname << "|" << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
}
