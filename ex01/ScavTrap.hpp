#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
<<<<<<< HEAD
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;
	bool			guard_gate;
=======
	bool	guard_gate_mode;
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524

public:
	ScavTrap();
	ScavTrap(const ScavTrap&);
<<<<<<< HEAD
	ScavTrap(std::string);
	~ScavTrap();

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
	void	guardGate();

	ScavTrap&	operator=(ScavTrap&);
};
=======
	ScavTrap(const std::string &Name);
	~ScavTrap();

	void	guardGate();

	ScavTrap	operator=(ScavTrap const &);
};
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
