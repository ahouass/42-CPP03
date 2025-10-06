#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	name			= "No_name";
	hitPoints		= 100;
	energyPoints	= 50;
	attackDamage	= 20;
	
	std::cout << "ScavTrap " << name << " default constructor called." << std::endl;
}

ScavTrap::ScavTrap ( std::string _name )
{
	name			= _name;
	hitPoints		= 100;
	energyPoints	= 50;
	attackDamage	= 20;

	std::cout << "ScavTrap " << name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy )
{
	name			= copy.name;
	hitPoints		= copy.hitPoints;
	energyPoints	= copy.energyPoints;
	attackDamage	= copy.attackDamage;

	std::cout << "ScavTrap " << name << " copy constructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& copy )
{
	name			= copy.name;
	hitPoints		= copy.hitPoints;
	energyPoints	= copy.energyPoints;
	attackDamage	= copy.attackDamage;

	std::cout << "ScavTrap " << name << " copy assignment operator called." << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << name << " destructor called." << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (!hitPoints || !energyPoints)
	{
		std::cout << "ScavTrap " << name << " can't attack (no energy or hit point)." << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage <<" points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
