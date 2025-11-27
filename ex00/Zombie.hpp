/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:59:05 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 15:59:20 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

using namespace	std;

class Zombie
{
  private:
	string _name;

  public:
	Zombie(void);
	Zombie(string name);
	~Zombie(void);
	void announce(void) const;
};

Zombie			*new_zombie(string name);
void			random_chump(string name);

#endif