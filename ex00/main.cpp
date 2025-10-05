#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap ct1("ct1");
	ClapTrap ct2("ct2");

	std::cout << "\n--- Attack ---\n";
	ct1.attack("ENEMY");
	ct2.takeDamage(0);

	std::cout << "\n--- Repair ---\n";
	ct1.beRepaired(5);

	std::cout << "\n--- Energy Exhaustion Test ---\n";
	for (int i = 0; i < 11; i++)
		ct1.attack("ENEMY");

	std::cout << "\n--- Damage Until Death ---\n";
	ct2.takeDamage(5);
	ct2.takeDamage(5);
	ct2.takeDamage(5);
	ct2.takeDamage(5);
	ct2.attack("ENEMY");

	return (0);
}
