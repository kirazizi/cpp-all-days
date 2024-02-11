/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:08:06 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/20 10:01:11 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
    this->flg = -1;
}

Contact::~Contact(void){
}

void   Contact::set_first_name(std::string first_name){
    this->first_name = first_name;
}

void   Contact::set_last_name(std::string last_name){
    this->last_name = last_name;
}

void   Contact::set_nickname(std::string nickname){
    this->nickname = nickname;
}

void   Contact::set_phone_number(std::string phone_number){
    this->phone_number = phone_number;
}

void   Contact::set_darkest_secret(std::string darkest_secret){
    this->darkest_secret = darkest_secret;
}

void Contact::set_flg(int flg){
    this->flg = flg;
}

std::string Contact::get_first_name(void) const {
    return (this->first_name);
}

std::string Contact::get_last_name(void) const {
    return (this->last_name);
}

std::string Contact::get_nickname(void) const {
    return (this->nickname);
}

std::string Contact::get_phone_number(void) const {
    return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const {
    return (this->darkest_secret);
}

int Contact::get_flg(void) const {
    return (this->flg);
}
