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
	cout << "A wild Karen has appeared!" << endl;
}

Karen::~Karen(void)
{
	cout << "Wild Karen flew away!" << endl;
}

void Karen::debug(void)
{
	cout << MAGENTA << "[DEBUG]   " << DEFAULT;
	cout << "I love to get extra bacon for my ";
	cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	cout << " I just love it!" << endl;
}

void Karen::info(void)
{
	cout << GRAY << "[INFO]    " << DEFAULT;
	cout << "I cannot believe adding extra bacon cost more money.";
	cout << " You don’t put enough! If you did I would not have to ask";
	cout << " for it!" << endl;
}

void Karen::warning(void)
{
	cout << YELLOW << "[WARNING] " << DEFAULT;
	cout << "I think I deserve to have some extra bacon for free.";
	cout << " I’ve been coming here for years and you just started ";
	cout << "working here last month." << endl;
}

void Karen::error(void)
{
	cout << RED << "[ERROR]   " << DEFAULT;
	cout << "This is unacceptable, I want to speak to the manager now.";
	cout << endl;
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