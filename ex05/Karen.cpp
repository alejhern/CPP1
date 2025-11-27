/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:03:57 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 21:03:59 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "A wild Karen has appeared!" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Wild Karen flew away!" << std::endl;
}

void Karen::debug(void)
{
	std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << GRAY << "[INFO]    " << DEFAULT;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough! If you did I would not have to ask";
	std::cout << " for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << YELLOW << "[WARNING] " << DEFAULT;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << RED << "[ERROR]   " << DEFAULT;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

void Karen::complain(string level)
{
	int i;
	void (Karen::*ptr_complain[4])(void) = {&Karen::debug, &Karen::info,
		&Karen::warning, &Karen::error};
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}