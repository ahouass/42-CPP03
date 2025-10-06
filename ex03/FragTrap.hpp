#pragma once

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap ( std::string _name );
		FragTrap ( const FragTrap& copy );
		FragTrap&	operator=( const FragTrap& copy );
		~FragTrap( void );
		
		void	highFivesGuys( void );
};
