/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/02 14:06:33 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(const std::string &name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << BLUE << "Default constructor for "<< _name <<" called." << RESET <<std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor for "<< _name <<" called." << RESET <<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"Aaaah! I'm out of health points! Call a medic, a mechanic, a—wait, do I even have health insurance?!\"" << RESET <<std::endl;
	else if (_energy <= 0)
		std::cout << _name << RED << ": \"Oh no! I'm all out of energy!\"" << RESET << std::endl;
	else
	{
		_energy -= 1;
		std::cout << PINK << "ClapTrap "<< _name <<" attacks "<< target <<", causing "<< _attack <<" points of damage!" << RESET <<std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"STOP!! I'm already dead..\"" << RESET <<std::endl;
	else
	{
		if (_hp <= amount)
			_hp = 0;
		else
			_hp -= amount;
		std::cout << MAGENTA << "ClapTrap "<< _name <<" has taken "<< amount <<" of damage." << RESET <<std::endl;
	}
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"Aaaah! I'm out of health points! Call a medic, a mechanic, a—wait, do I even have health insurance?!\"" << RESET <<std::endl;
	else if (_energy <= 0)
		std::cout << _name << RED << ": \"Oh no! I'm all out of energy!\"" << RESET << std::endl;
	else
	{
		if ((UINT_MAX - _hp) <= amount)
			_hp = UINT_MAX;
		else
			_hp += amount;
		_energy -= 1;
		std::cout << GREEN << "ClapTrap "<< _name <<" has been repaired by "<< amount <<" of damage."<< RESET <<std::endl;
	}
	
}
