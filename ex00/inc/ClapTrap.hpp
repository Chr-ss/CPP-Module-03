/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 11:41:51 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <cctype>
# include <iostream>
# include <climits>

# define RESET          "\033[0m"
# define BLACK          "\033[30m"
# define WHITE          "\033[37m"
# define BRIGHT_WHITE   "\033[97m"
# define RED            "\033[31m"
# define BRIGHT_RED     "\033[91m"
# define YELLOW         "\033[33m"
# define BRIGHT_YELLOW  "\033[93m"
# define BLUE           "\033[34m"
# define LIGHT_BLUE     "\033[38;5;123m"
# define BRIGHT_BLUE    "\033[94m"
# define MAGENTA        "\033[35m"
# define BRIGHT_MAGENTA "\033[95m"
# define CYAN           "\033[36m"
# define BRIGHT_CYAN    "\033[96m"
# define GREEN          "\033[32m"
# define BRIGHT_GREEN   "\033[92m"
# define GRAY           "\033[90m"
# define LIGHT_GRAY     "\033[37m"
# define DARK_GRAY      "\033[90m"
# define ORANGE         "\033[38;5;208m"
# define PINK           "\033[38;5;213m"
# define PURPLE         "\033[38;5;129m"
# define BOLD           "\033[1m"
# define UNDERLINE      "\033[4m"


class ClapTrap {
private:
	std::string					_name;
	unsigned int				_hp;
	unsigned int				_energy;
	unsigned int				_attack;
public:
	// Constructor
	ClapTrap();
	ClapTrap(const std::string &name);
	// Destructor
	~ClapTrap();

	// Copy Constructor
	ClapTrap(const ClapTrap &toCopy);
	// Copy assignment operator
	ClapTrap& operator=(const ClapTrap &other);
	// Move Constructor
	ClapTrap(ClapTrap&& other) noexcept;
	//Move Assignment Operator
	ClapTrap& operator=(ClapTrap&& other) noexcept;

	// Public functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif // CLAP_TRAP_HPP