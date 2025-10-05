/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:24:43 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 20:54:21 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	// ================== ClapTrap Tests ==================
	{
		std::cout << "--- ClapTrap Tests ---\n";
		ClapTrap ct1("CT-One");
		ClapTrap ct2("CT-Two");

		std::cout << "\n--- Basic Attack Test ---\n";
		ct1.attack("CT-Two");
		ct2.takeDamage(0);

		std::cout << "\n--- Repair Test ---\n";
		ct1.beRepaired(5);

		std::cout << "\n--- Energy Exhaustion Test ---\n";
		for (int i = 0; i < 11; i++)
			ct1.attack("CT-Two");

		std::cout << "\n--- Damage Until Death ---\n";
		ct2.takeDamage(5);
		ct2.takeDamage(5);
		ct2.attack("CT-One");
	}

	std::cout << "\n======================================================================\n" << std::endl;

	// ================== ScavTrap Tests ==================
	{
		std::cout << "\n--- ScavTrap Tests ---\n";
		ScavTrap st1("ST-One");
		ScavTrap st2("ST-Two");

		std::cout << "\n--- Basic Attack Test ---\n";
		st1.attack("ST-Two");
		st2.takeDamage(0);

		std::cout << "\n--- Repair Test ---\n";
		st1.beRepaired(5);

		std::cout << "\n--- Energy Exhaustion Test ---\n";
		for (int i = 0; i < 51; i++)
			st1.attack("ST-Two");

		std::cout << "\n--- Damage Until Death ---\n";
		st2.takeDamage(50);
		st2.takeDamage(65);
		st2.attack("ST-One");

		std::cout << "\n--- Special Ability Test ---\n";
		st1.guardGate();
	}
	
	std::cout << "\n======================================================================\n" << std::endl;

	// ================== FragTrap Tests ==================
	{
		std::cout << "--- FragTrap Tests ---\n";
		FragTrap ft1("FT-One");
		FragTrap ft2("FT-Two");

		std::cout << "\n--- Basic Attack Test ---\n";
		ft1.attack("FT-Two");
		ft2.takeDamage(0);

		std::cout << "\n--- Repair Test ---\n";
		ft1.beRepaired(5);

		std::cout << "\n--- Energy Exhaustion Test ---\n";
		for (int i = 0; i < 101; i++)
			ft1.attack("FT-Two");

		std::cout << "\n--- Damage Until Death ---\n";
		ft2.takeDamage(50);
		ft2.takeDamage(100);
		ft2.attack("FT-One");

		std::cout << "\n--- Special Ability Test ---\n";
		ft1.highFivesGuys();
	}

	std::cout << "\n======================================================================\n" << std::endl;

	// ================== DiamondTrap Tests ==================
	{
		std::cout << "--- DiamondTrap Tests ---\n";
		
		DiamondTrap dt_default;

		DiamondTrap dt1("DT-One");

		DiamondTrap dt_copy(dt1);

		DiamondTrap dt_assign;
		dt_assign = dt1;

		std::cout << "\n--- Basic Attack Test ---\n";
		dt1.attack("Enemy");
		
		std::cout << "\n--- Repair Test ---\n";
		dt1.beRepaired(10);
		
		std::cout << "\n--- Energy Exhaustion Test ---\n";
		for (int i = 0; i < 50; i++)
			dt1.attack("Enemy");

		std::cout << "\n--- Damage Until Death ---\n";
		dt1.takeDamage(100);
		dt1.takeDamage(50);
		dt1.attack("Enemy");

		std::cout << "\n--- Special Ability (whoAmI) ---\n";
		dt1.whoAmI();
		dt_default.whoAmI();
		dt_copy.whoAmI();
		dt_assign.whoAmI();


		std::cout << "\n--- destructor ---\n";
	}
	
	return (0);
}
