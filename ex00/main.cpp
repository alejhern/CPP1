/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:11:20 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 16:11:22 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1 = new_zombie("Zombie1");
	Zombie *zombie2 = new_zombie("Zombie2");
	Zombie *zombie3 = new_zombie("Zombie3");

    random_chump("RandomZombie1");

	delete zombie1;
	delete zombie2;
	delete zombie3;

	return (0);
}
