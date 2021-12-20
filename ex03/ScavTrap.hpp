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

	virtual void	attack(std::string const &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
	virtual void	guardGate();

	ScavTrap&	operator=(ScavTrap&);
};