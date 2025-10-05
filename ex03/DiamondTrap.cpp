/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:09:09 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/12 21:52:11 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap(), name("No_name")
{
	ClapTrap::name = "No_name_clap_name";
	hit_pts = FragTrap::hit_pts;
	energy_pts = ScavTrap::energy_pts;
	attack_pts = FragTrap::attack_pts;
	std::cout << "DiamondTrap " << name << " default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( std::string _name ) : ClapTrap(), ScavTrap(), FragTrap(), name(_name)
{
	ClapTrap::name = _name + "_clap_name";
	hit_pts = FragTrap::hit_pts;
	energy_pts = ScavTrap::energy_pts;
	attack_pts = FragTrap::attack_pts;
	std::cout << "DiamondTrap " << name << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : ClapTrap(), ScavTrap(), FragTrap(), name(copy.name)
{
	ClapTrap::name = copy.ClapTrap::name;
	hit_pts = copy.hit_pts;
	energy_pts = copy.energy_pts;
	attack_pts = copy.attack_pts;
	std::cout << "DiamondTrap " << name << " copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		ClapTrap::name = copy.ClapTrap::name;
		hit_pts = copy.hit_pts;
		energy_pts = copy.energy_pts;
		attack_pts = copy.attack_pts;
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
