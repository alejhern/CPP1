/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:49:14 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 16:49:25 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef std::string string;

int	main(void)
{
	string sample = "Hi This is BRAIN";
	string &stringREF = sample;
	string *stringPTR = &sample;

	std::cout << "Memory address of sample: " << &sample << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "Value of sample: " << sample << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}