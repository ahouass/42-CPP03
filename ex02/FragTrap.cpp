#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	name = "No_name";
	hit_pts = 100;
	energy_pts = 100;
	attack_pts = 30;
	std::cout << "FragTrap " << name << " default constructor called." << std::endl;
}

FragTrap::FragTrap ( std::string _name )
{
	name = _name;
	hit_pts = 100;
	energy_pts = 100;
	attack_pts = 30;
	std::cout << "FragTrap " << name << " constructor called." << std::endl;
}

FragTrap::FragTrap ( const FragTrap& copy )
{
	name = copy.name;
	hit_pts = copy.hit_pts;
	energy_pts = copy.energy_pts;
	attack_pts = copy.attack_pts;
	std::cout << "FragTrap " << name << " copy constructor called." << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		hit_pts = copy.hit_pts;
		energy_pts = copy.energy_pts;
		attack_pts = copy.attack_pts;
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
