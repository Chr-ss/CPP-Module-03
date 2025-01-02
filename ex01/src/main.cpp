/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/02 14:27:55 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

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
		
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap1.attack("clap2");
		clap2.takeDamage(5);
		clap2.beRepaired(100);
		clap2.takeDamage(50);
		clap2.takeDamage(70);
		clap2.takeDamage(1);
		clap2.beRepaired(100);
		clap2.takeDamage(1);
	}
	{
		std::cout << "\n\tTEST 2:" << std::endl;
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
		std::cout << "\n\tTEST 4:" << std::endl;
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
	return (0);
}