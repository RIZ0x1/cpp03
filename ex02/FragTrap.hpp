#pragma once

#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;

public:
	FragTrap();
	FragTrap(const FragTrap&);

	FragTrap& operator=(FragTrap &FragTrap);
};
