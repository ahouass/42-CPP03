/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:24:43 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 14:49:30 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap ct1("Alpha");
	ClapTrap ct2("Beta");

	std::cout << "\n--- Basic Attack Test ---\n";
	ct1.attack("Beta");
	ct2.takeDamage(0);

	std::cout << "\n--- Repair Test ---\n";
	ct1.beRepaired(5);

	std::cout << "\n--- Energy Exhaustion Test ---\n";
	for (int i = 0; i < 11; i++)
		ct1.attack("Beta");

	std::cout << "\n--- Damage Until Death ---\n";
	ct2.takeDamage(5);
	ct2.takeDamage(5);
	ct2.attack("Alpha");

	return (0);
}
