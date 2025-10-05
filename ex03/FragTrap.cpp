#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	name = "No_name";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " default constructor called." << std::endl;
}

FragTrap::FragTrap ( std::string _name )
{
	name = _name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called." << std::endl;
}

FragTrap::FragTrap ( const FragTrap& copy )
{
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
	std::cout << "FragTrap " << name << " copy constructor called." << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
		std::cout << "FragTrap " << name << " copy assignment operator called." << std::endl;
	}
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << name << " destructor called." << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
