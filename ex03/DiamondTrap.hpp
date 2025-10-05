#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string _name );
		DiamondTrap( const DiamondTrap& copy );
		DiamondTrap&	operator=( const DiamondTrap& copy );
		~DiamondTrap( void );
		void	attack( const std::string &target );
		void	whoAmI( void );
};