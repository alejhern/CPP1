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

using namespace	std;

int	main(void)
{
	string sample = "Hi This is BRAIN";
	string &stringREF = sample;
	string *stringPTR = &sample;

	cout << "Memory address of sample: " << &sample << endl;
	cout << "Memory address held by stringPTR: " << stringPTR << endl;
	cout << "Memory address held by stringREF: " << &stringREF << endl;

	cout << "Value of sample: " << sample << endl;
	cout << "Value pointed to by stringPTR: " << *stringPTR << endl;
	cout << "Value pointed to by stringREF: " << stringREF << endl;

	return (0);
}