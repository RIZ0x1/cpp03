#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;

public:
	ScavTrap();
	ScavTrap(const ScavTrap&);

	void	guardGate();

	ScavTrap&	operator=(ScavTrap&);
};
