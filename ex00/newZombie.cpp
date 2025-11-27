/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:07:10 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 16:07:13 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*new_zombie(string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	zombie->announce();
	return (zombie);
}
