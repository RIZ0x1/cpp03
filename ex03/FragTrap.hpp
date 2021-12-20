#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;

public:
	FragTrap();
	FragTrap(const FragTrap&);
	FragTrap(std::string);
	~FragTrap();

	virtual void	attack(std::string const &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
	virtual void	highFivesGuys(void);

	FragTrap& operator=(FragTrap &FragTrap);
};
