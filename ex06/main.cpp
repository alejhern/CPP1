/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:07:54 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 21:07:58 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	get_level_index(const string &level)
{
    int             i;
	const string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = -1;
    while (++i < 4)
	{
		if (levels[i] == level)
			return (i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	Karen   karen;
	int     level_index;

	if (argc != 2)
	{
		std::cout << "Usage: ./karenFilter <level>" << std::endl;
		return (1);
	}
    level_index = get_level_index(argv[1]);
    switch (level_index)
    {
        case 0:
            karen.complain("DEBUG");
        case 1:
            karen.complain("INFO");
        case 2:
            karen.complain("WARNING");
        case 3:
            karen.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
	return (0);
}
