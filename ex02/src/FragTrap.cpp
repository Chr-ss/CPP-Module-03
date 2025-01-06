/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 12:10:44 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Constructor
FragTrap::FragTrap() : ScavTrap()
{
	std::cout << BLUE << "FragTrap default constructor without name called." << RESET << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ScavTrap(name)
{
	_hp = 100;
	_energy = 100;
	_attack = 30;
	std::cout << BLUE << "FragTrap constructor for "<< _name <<" called." << RESET << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap &toCopy) : ScavTrap(toCopy)
{
	std::cout << BLUE << "FragTrap copy constructor for "<< _name <<" called." << RESET << std::endl;
}

// Copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
	if (this == &toCopy)
		return *this;
	_name = toCopy._name;
	_hp = toCopy._hp;
	_energy = toCopy._energy;
	_attack = toCopy._attack;
	std::cout << BLUE << "FragTrap copy assignment operator for "<< _name <<" called." << RESET << std::endl;
	return *this;
}

// Move Constructor
FragTrap::FragTrap(FragTrap &&toMove) noexcept : ScavTrap(std::move(toMove))
{
	std::cout << BLUE << "FragTrap move constructor for "<< _name <<" called." << RESET << std::endl;
}

// Move assignment operator
FragTrap &FragTrap::operator=(FragTrap &&toMove) noexcept
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
	std::cout << BLUE << "FragTrap move assignment operator for "<< _name <<" called." << RESET << std::endl;
	return *this;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << RED << "Destructor for FragTrap \""<< _name <<"\" called." << RESET << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << BOLD << _name << CYAN << ": \"Who’s up for some high fives? Let’s slap some virtual skin and bask in my awesomeness!\" 🙌💥" << RESET << std::endl;
}