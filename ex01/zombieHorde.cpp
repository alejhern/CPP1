/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:36:23 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 16:36:25 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombie_horde(int n, std::string name)
{
	int i;
	if (n <= 0)
		return (NULL);
	Zombie *horde = new Zombie[n];
	i = -1;
	while (++i < n)
	{
		horde[i].set_name(name);
		horde[i].announce();
	}
	return (horde);
}