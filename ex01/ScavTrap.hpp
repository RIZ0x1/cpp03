#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;
	bool			guard_gate;

public:
	ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap(std::string);
	~ScavTrap();

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
	void	guardGate();

	ScavTrap&	operator=(ScavTrap&);
};