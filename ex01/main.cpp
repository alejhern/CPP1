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
	Zombie *zombieHorde = zombie_horde(5, "HordeZombie1");
	Zombie *zombie2 = new_zombie("SoloZombie");
	Zombie *zombie_horde2 = zombie_horde(3, "HordeZombie2");

	random_chump("RandomZombie1");

	delete zombie2;
	delete [] zombieHorde;
	delete [] zombie_horde2;

	return (0);
}
