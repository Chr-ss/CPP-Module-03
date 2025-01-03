/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 12:10:19 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Constructor
FragTrap::FragTrap(const std::string &name) : ScavTrap(name)
{
	_hp = 100;
	_energy = 100;
	_attack = 30;
	std::cout << BLUE << "FragTrap constructor for "<< _name <<" called." << RESET << std::endl;
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