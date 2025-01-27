/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:08:28 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/22 16:45:03 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        int        flg;
         
    public:
        Contact(void);
        ~Contact(void);
        void   set_first_name(std::string first_name);
        void   set_last_name(std::string last_name);
        void   set_nickname(std::string nickname);
        void   set_phone_number(std::string phone_number);
        void   set_darkest_secret(std::string darkest_secret);
        void   set_flg(int flg);

        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_number(void) const;
        std::string get_darkest_secret(void) const;
        int         get_flg(void) const;
};

# endif