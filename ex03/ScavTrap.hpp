#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap ( std::string _name );
		ScavTrap( const ScavTrap& copy );
		ScavTrap&	operator=( const ScavTrap& copy );
		~ScavTrap( void );
		
		void	attack( const std::string& target );
		void	guardGate( void );
};
