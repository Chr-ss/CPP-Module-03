/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/06 12:13:32 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main(void)
{
	{
		std::cout << "\n\tTEST 1 (HP):" << std::endl;
		ClapTrap isla = ClapTrap("Isla");
		ClapTrap chriss = ClapTrap("Chriss");

		isla.attack("Chriss");
		chriss.takeDamage(5);
		chriss.takeDamage(5);
		chriss.takeDamage(1);
	}
	{
		std::cout << "\n\tTEST 2 (Energy):" << std::endl;

		ClapTrap clap1 = ClapTrap("clap1");
		for (int i = 1; i <= 11; i++)
		{
			std::cout << "Attack " << i << ":\t";
			clap1.attack("clap2");
		}
		clap1.beRepaired(10);
	}
	{
		std::cout << "\n\tTEST 3 (DMG & repair):" << std::endl;
		ClapTrap clap2 = ClapTrap("clap2");

		clap2.takeDamage(5);
		clap2.beRepaired(100);
		clap2.takeDamage(50);
		clap2.takeDamage(70);
		clap2.takeDamage(1);
		clap2.beRepaired(100);
		clap2.takeDamage(1);
	}
	{
		std::cout << "\n\tTEST 4 (UINT_MAX):" << std::endl;
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
		std::cout << "\n\tTEST 5 (Operators):" << std::endl;
		ClapTrap operators1("operators1");
		ClapTrap operators2("operators2");

		operators1.attack("EVERYONE");
		operators2.attack("EVERYONE");

		std::cout << "\tCopy constructor:" << std::endl;
		ClapTrap operators3(operators2);
		operators3.attack("EVERYONE");

		std::cout << "\tCopy assignment operator:" << std::endl;
		operators3 = operators1;
		operators3.attack("EVERYONE");

		std::cout << "\tMove assignment operator:" << std::endl;
		ClapTrap operators5(std::move(operators2));
		operators5.attack("EVERYONE");
		operators2.attack("EVERYONE");

		std::cout << "\tMove assignment operator:" << std::endl;
		ClapTrap operators4;
		operators4 = std::move(operators1);
		operators4.attack("EVERYONE");
		operators1.attack("EVERYONE");
	}
	{
		std::cout << "\n\tTEST 5 (Scav with 100HP and guardGate):" << std::endl;
		ScavTrap scav = ScavTrap("scav");

		scav.attack("EVERYONE");
		scav.guardGate();
		scav.takeDamage(50);
		scav.beRepaired(50);
		scav.takeDamage(50);
		scav.takeDamage(50);
		scav.takeDamage(1);
	}
	{
		std::cout << "\n\tTEST 6 (Scav construction/destruction chaining):" << std::endl;
		ScavTrap scav = ScavTrap("scav");
	}
	return (0);
}