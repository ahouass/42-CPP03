#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap(), name("No_name")
{
	ClapTrap::name = "No_name_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( std::string _name ) : ClapTrap(), ScavTrap(), FragTrap(), name(_name)
{
	ClapTrap::name = _name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : ClapTrap(), ScavTrap(), FragTrap(), name(copy.name)
{
	ClapTrap::name = copy.ClapTrap::name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
	std::cout << "DiamondTrap " << name << " copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		ClapTrap::name = copy.ClapTrap::name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
		std::cout << "DiamondTrap " << name << " copy assignment operator called." << std::endl;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << name << " destructor called." << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My DiamondTrap name: " << name << " - My ClapTrap name: " << ClapTrap::name << std::endl;
}
