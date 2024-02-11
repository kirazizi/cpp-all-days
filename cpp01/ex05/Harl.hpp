/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:19:36 by sbzizal           #+#    #+#             */
/*   Updated: 2023/11/21 19:42:18 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*fun_ptr[4])(void);
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};

#endif