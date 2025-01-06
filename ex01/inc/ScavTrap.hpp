/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 11:48:51 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <cctype>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	// Constructor
	ScavTrap();
	ScavTrap(const std::string &name);
	// Destructor
	~ScavTrap();

	// Copy Constructor
	ScavTrap(const ScavTrap &toCopy);
	// Copy assignment operator
	ScavTrap& operator=(const ScavTrap &other);
	// Move Constructor
	ScavTrap(ScavTrap&& other) noexcept;
	// Move Assignment Operator
	ScavTrap& operator=(ScavTrap&& other) noexcept;

	// Public functions
	void attack(const std::string& target);
	void guardGate();
};


#endif // SCAV_TRAP_HPP