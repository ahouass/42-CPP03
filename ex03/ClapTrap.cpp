#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("No_name"), hit_pts(10), energy_pts(10), attack_pts(0)
{
	std::cout << "ClapTrap " << name << " default constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hit_pts(10), energy_pts(10), attack_pts(0)
{
	std::cout << "ClapTrap " << name << " constructor called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) : name(copy.name), hit_pts(copy.hit_pts), energy_pts(copy.energy_pts), attack_pts(copy.attack_pts)
{
	std::cout << "ClapTrap " << name << " copy constructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		hit_pts = copy.hit_pts;
		energy_pts = copy.energy_pts;
		attack_pts = copy.attack_pts;
		std::cout << "ClapTrap " << name << " copy assignment operator called." << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << name << " destructor called." << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (!hit_pts || !energy_pts)
	{
		std::cout << "ClapTrap " << name << " can't attack (no energy or hit point)." << std::endl;
		return ;
	}
	energy_pts--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_pts <<" points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (!hit_pts)
	{
		std::cout << "ClapTrap " << name << " can't take damage (no hit point)." << std::endl;
		return ;
	}
	if (hit_pts <= amount)
		hit_pts = 0;
	else
		hit_pts -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage, now it has " << hit_pts << " hit points." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (!hit_pts || !energy_pts)
	{
		std::cout << "ClapTrap " << name << " can't repair (no energy or hit point)." << std::endl;
		return ;
	}
	energy_pts--;
	hit_pts += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points, now it has " << hit_pts << " hit points." << std::endl;
}
