/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 11:32:17 by christian.r   ########   odam.nl         */
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
	FragTrap() = default;
	FragTrap(const std::string &name);
	// Destructor
	~FragTrap();

	// Copy Constructor
	FragTrap(const FragTrap &toCopy) = default;
	// Copy assignment operator
	FragTrap& operator=(const FragTrap &other) = default;
	// Move Constructor
	FragTrap(FragTrap&& other) noexcept = default;
	// Move Assignment Operator
	FragTrap& operator=(FragTrap&& other) noexcept = default;

	// Public functions
	void highFivesGuys(void);
};


#endif // FRAG_TRAP_HPP