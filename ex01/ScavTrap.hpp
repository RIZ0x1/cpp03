#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	bool	guard_gate_mode;

public:
	ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap(const std::string &Name);
	~ScavTrap();

	void	guardGate();

	ScavTrap	operator=(ScavTrap const &);
};
