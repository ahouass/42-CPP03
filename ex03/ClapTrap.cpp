#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("No_name"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " default constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage)
{
	std::cout << "ClapTrap " << name << " copy constructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& copy )
{
	name			= copy.name;
	hitPoints		= copy.hitPoints;
	energyPoints	= copy.energyPoints;
	attackDamage	= copy.attackDamage;
	
	std::cout << "ClapTrap " << name << " copy assignment operator called." << std::endl;

	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << name << " destructor called." << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (!hitPoints || !energyPoints)
	{
		std::cout << "ClapTrap " << name << " can't attack (no energy or hit point)." << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage <<" points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (!hitPoints)
	{
		std::cout << "ClapTrap " << name << " can't take damage (no hit point)." << std::endl;
		return ;
	}
	if (hitPoints <= amount)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage, now it has " << hitPoints << " hit points." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (!hitPoints || !energyPoints)
	{
		std::cout << "ClapTrap " << name << " can't repair (no energy or hit point)." << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points, now it has " << hitPoints << " hit points." << std::endl;
}
