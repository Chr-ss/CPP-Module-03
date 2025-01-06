/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 12:10:03 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap() : _name(""), _hp(0), _energy(0), _attack(0)
{
	std::cout << BLUE << "Default constructor without name called." << RESET <<std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << BLUE << "Default constructor for "<< _name <<" called." << RESET <<std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &toCopy) : _name(toCopy._name), _hp(toCopy._hp), _energy(toCopy._energy), _attack(toCopy._attack)
{
	std::cout << BLUE << "Copy constructor for "<< _name <<" called." << RESET <<std::endl;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
	if (this == &toCopy)
		return *this;
	_name = toCopy._name;
	_hp = toCopy._hp;
	_energy = toCopy._energy;
	_attack = toCopy._attack;
	std::cout << BLUE << "Copy assignment operator for "<< _name <<" called." << RESET <<std::endl;
	return *this;
}

// Move constructor
ClapTrap::ClapTrap(ClapTrap &&toMove) noexcept : _name(toMove._name), _hp(toMove._hp), _energy(toMove._energy), _attack(toMove._attack)
{
	toMove._name = "";
	toMove._hp = 0;
	toMove._energy = 0;
	toMove._attack = 0;
	std::cout << BLUE << "Move constructor for "<< _name <<" called." << RESET <<std::endl;
}

// Move assignment operator
ClapTrap &ClapTrap::operator=(ClapTrap &&toMove) noexcept
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
	std::cout << BLUE << "Move assignment operator for "<< _name <<" called." << RESET <<std::endl;
	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor for ClapTrap \""<< _name <<"\" called." << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"Aaaah! I'm out of health points! Call a medic, a mechanic, a—wait, do I even have health insurance?!\"" << RESET << std::endl;
	else if (_energy <= 0)
		std::cout << _name << RED << ": \"Oh no! I'm all out of energy!\"" << RESET << std::endl;
	else
	{
		_energy -= 1;
		std::cout << PINK << "ClapTrap "<< _name <<" attacks \""<< target <<"\" causing "<< _attack <<" points damage!" << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"STOP!! I'm already dead..\"" << RESET << std::endl;
	else
	{
		if (_hp <= amount)
			_hp = 0;
		else
			_hp -= amount;
		std::cout << MAGENTA << "ClapTrap "<< _name <<" has taken "<< amount <<" damage." << RESET << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << _name << RED << ": \"Aaaah! I'm out of health points! Call a medic, a mechanic, a—wait, do I even have health insurance?!\"" << RESET << std::endl;
	else if (_energy <= 0)
		std::cout << _name << RED << ": \"Oh no! I'm all out of energy!\"" << RESET << std::endl;
	else
	{
		if ((UINT_MAX - _hp) <= amount)
			_hp = UINT_MAX;
		else
			_hp += amount;
		_energy -= 1;
		std::cout << GREEN << "ClapTrap "<< _name <<" has been repaired by "<< amount <<" damage."<< RESET << std::endl;
	}

}
