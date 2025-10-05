#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	name = "No_name";
	hit_pts = 100;
	energy_pts = 50;
	attack_pts = 20;
	std::cout << "ScavTrap " << name << " default constructor called." << std::endl;
}

ScavTrap::ScavTrap ( std::string _name )
{
	name = _name;
	hit_pts = 100;
	energy_pts = 50;
	attack_pts = 20;
	std::cout << "ScavTrap " << name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy )
{
	name = copy.name;
	hit_pts = copy.hit_pts;
	energy_pts = copy.energy_pts;
	attack_pts = copy.attack_pts;
	std::cout << "ScavTrap " << name << " copy assignment operator called." << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		hit_pts = copy.hit_pts;
		energy_pts = copy.energy_pts;
		attack_pts = copy.attack_pts;
		std::cout << "ScavTrap " << name << " copy assignment operator called." << std::endl;
	}
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << name << " destructor called." << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (!hit_pts || !energy_pts)
	{
		std::cout << "ScavTrap " << name << " can't attack (no energy or hit point)." << std::endl;
		return ;
	}
	energy_pts--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_pts <<" points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
