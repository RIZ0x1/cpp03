#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	bool			in_guard_gate_mode;

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