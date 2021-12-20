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

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
	void	highFivesGuys(void);

	FragTrap& operator=(FragTrap &FragTrap);
};
