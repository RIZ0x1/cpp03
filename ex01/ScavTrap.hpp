#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	

public:
	ScavTrap();
	ScavTrap(const ScavTrap&);


	void	guardGate();
};