/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:39:14 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 17:39:17 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
  private:
	string _type;

  public:
	Weapon(string type) : _type(type){};
	~Weapon(){};
	const string getType() const
	{
		return (this->_type);
	}
	void setType(string type)
	{
		this->_type = type;
	}
};

#endif