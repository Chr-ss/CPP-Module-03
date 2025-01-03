/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/03 12:12:45 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main(void)
{
	{
		std::cout << "\n\tTEST 1:" << std::endl;
		ClapTrap isla = ClapTrap("Isla");
		ClapTrap chriss = ClapTrap("Chriss");
		
		isla.attack("Chriss");
		chriss.takeDamage(5);
		chriss.takeDamage(50);
		chriss.takeDamage(1);
	}
	{
		std::cout << "\n\tTEST 2:" << std::endl;
		ClapTrap clap1 = ClapTrap("clap1");
		ClapTrap clap2 = ClapTrap("clap2");
		
		for (int i = 1; i <= 11; i++)
		{
			std::cout << "Attack " << i << ":\t";
			clap1.attack("clap2");
		}
		clap2.takeDamage(5);
		clap2.beRepaired(100);
		clap2.takeDamage(50);
		clap2.takeDamage(70);
		clap2.takeDamage(1);
		clap2.beRepaired(100);
		clap2.takeDamage(1);
	}
	{
		std::cout << "\n\tTEST 2 (UINT_MAX):" << std::endl;
		ClapTrap chriss = ClapTrap("Chriss");
		ClapTrap isla = ClapTrap("Isla");

		chriss.beRepaired(UINT_MAX);
		chriss.takeDamage(UINT_MAX - 1);
		chriss.takeDamage(1);
		chriss.takeDamage(1);
		isla.takeDamage(UINT_MAX);
		isla.beRepaired(1);
		isla.attack("EVERYONE");
	}
	{
		std::cout << "\n\tTEST 4 (Operators):" << std::endl;
		ClapTrap unusedstuff1("unusedstuff1");
		ClapTrap unusedstuff2("unusedstuff2");

		unusedstuff1.attack("EVERYONE");
		unusedstuff2.attack("EVERYONE");

		ClapTrap unusedstuff3(unusedstuff2);
		unusedstuff3.attack("EVERYONE");
		unusedstuff3 = unusedstuff1;
		unusedstuff3.attack("EVERYONE");

		ClapTrap unusedstuff4;
		unusedstuff4.attack("EVERYONE");
	}
	{
		std::cout << "\n\tTEST 5 (Scav with 100HP and guardGate):" << std::endl;
		ScavTrap scav = ScavTrap("scav");

		scav.attack("EVERYONE");
		scav.guardGate();
		scav.takeDamage(50);
		scav.beRepaired(1);
		scav.takeDamage(50);
		scav.takeDamage(50);
	}
	{
		std::cout << "\n\tTEST 6 (Scav construction/destruction chaining):" << std::endl;
		ScavTrap scav = ScavTrap("scav");
	}
	{
		std::cout << "\n\tTEST 5 (Frag with 100HP, 100 energy and highFivesGuys):" << std::endl;
		FragTrap frag = FragTrap("frag");

		frag.guardGate();
		frag.highFivesGuys();
		for (int i = 1; i <= 101; i++)
		{
			std::cout << "Attack " << i << ":\t";
			frag.attack("ME");
		}
	}
	{
		std::cout << "\n\tTEST 8 (Frag construction/destruction chaining):" << std::endl;
		FragTrap frag = FragTrap("frag");
	}
	return (0);
}