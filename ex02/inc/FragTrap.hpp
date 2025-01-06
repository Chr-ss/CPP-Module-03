/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 11:53:54 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <cctype>
# include <iostream>
# include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
public:
	// Constructor
	FragTrap();
	FragTrap(const std::string &name);
	// Destructor
	~FragTrap();

	// Copy Constructor
	FragTrap(const FragTrap &toCopy);
	// Copy assignment operator
	FragTrap& operator=(const FragTrap &other);
	// Move Constructor
	FragTrap(FragTrap&& other) noexcept;
	// Move Assignment Operator
	FragTrap& operator=(FragTrap&& other) noexcept;

	// Public functions
	void highFivesGuys(void);
};


#endif // FRAG_TRAP_HPP