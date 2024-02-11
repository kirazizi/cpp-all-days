/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:11:03 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/04 10:00:35 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook{

    private:
        Contact arr_contact[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        int     search_id(void);
        void    search_contact(void);
        int     fill_contact(int index);
};

#endif
