#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	bool			guard_gate_mode;

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