/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 12:13:40 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_attack = 20;
	std::cout << BLUE << "ScavTrap constructor for "<< _name <<" called." << RESET << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor for ScavTrap \""<< _name <<"\" called." << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"Aaaah! I'm out of health points! Call a medic, I have private health insurance!!\"" << RESET << std::endl;
	else if (_energy <= 0)
		std::cout << _name << RED << ": \"I'm all out of energy! Time for a booster!\"" << RESET << std::endl;
	else
	{
		_energy -= 1;
		std::cout << PINK << "ScavTrap "<< _name <<" attacks \""<< target <<"\" causing "<< _attack <<" points damage!" << RESET << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << BOLD << CYAN << "ScavTrap "<< _name <<" is now guarding the gate." << RESET << std::endl;
}