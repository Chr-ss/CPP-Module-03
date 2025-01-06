/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 12:08:05 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << BLUE << "ScavTrap default constructor without name called." << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_attack = 20;
	std::cout << BLUE << "ScavTrap constructor for "<< _name <<" called." << RESET << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << BLUE << "ScavTrap copy constructor for "<< _name <<" called." << RESET << std::endl;
}

// Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
{
	if (this == &toCopy)
		return *this;
	_name = toCopy._name;
	_hp = toCopy._hp;
	_energy = toCopy._energy;
	_attack = toCopy._attack;
	std::cout << BLUE << "ScavTrap copy assignment operator for "<< _name <<" called." << RESET << std::endl;
	return *this;
}

// Move Constructor
ScavTrap::ScavTrap(ScavTrap &&toMove) noexcept : ClapTrap(std::move(toMove))
{
	std::cout << BLUE << "ScavTrap move constructor for "<< _name <<" called." << RESET << std::endl;
}

// Move assignment operator
ScavTrap &ScavTrap::operator=(ScavTrap &&toMove) noexcept
{
	if (this == &toMove)
		return *this;
	_name = toMove._name;
	_hp = toMove._hp;
	_energy = toMove._energy;
	_attack = toMove._attack;
	toMove._name = "";
	toMove._hp = 0;
	toMove._energy = 0;
	toMove._attack = 0;
	std::cout << BLUE << "ScavTrap move assignment operator for "<< _name <<" called." << RESET << std::endl;
	return *this;
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