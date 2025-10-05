#pragma once

#include <iostream>
#include <string>

class	ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string _name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap&	operator=( const ClapTrap& copy );
		~ClapTrap( void );
        
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
