/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:59 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 17:31:02 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

class Human
{
  private:
	string _name;
	Weapon *_weapon;

  public:
	Human(string name) : _name(name), _weapon(NULL)
	{
	}

	Human(string name, Weapon &weapon) : _name(name), _weapon(&weapon)
	{
	}

	~Human()
	{
	}

	void attack() const
	{
		if (_weapon)
			std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
		else
			std::cout << _name << " has no weapon!" << std::endl;
	}

	void setWeapon(Weapon &weapon)
	{
		_weapon = &weapon;
	}

	string getName() const
	{
		return (_name);
	}
};

class HumanA : public Human
{
  public:
	HumanA(string name, Weapon &weapon) : Human(name, weapon)
	{
	}

	~HumanA()
	{
	}
};

class HumanB : public Human
{
  public:
	HumanB(string name) : Human(name)
	{
	}

	HumanB(string name, Weapon &weapon) : Human(name, weapon)
	{
	}

	~HumanB()
	{
	}
};

#endif