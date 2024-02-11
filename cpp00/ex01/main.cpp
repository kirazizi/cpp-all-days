/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:18:32 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/20 10:00:24 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){

    PhoneBook phonebook;
    std::string cmd;

    int index = 0;
    int add_contact = 0;

    while(1){
        std::cout << "please enter a command:| ADD | SEARCH | EXIT |" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof()){
            break;
        }
        if (cmd == "ADD"){
            if (index == 8)
                index = 0;
            add_contact = phonebook.fill_contact(index);
            if (add_contact == -1)
                break;
            else if (add_contact == 1)
                continue;
            index++;
        }
        else if (cmd == "SEARCH"){
            phonebook.search_contact();
            if (phonebook.search_id() == -1)
                break;
        }
        else if (cmd == "EXIT"){
            break;
        }
        else{
            std::cout << "invalid command" << std::endl;
        }
    }
}
