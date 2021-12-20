#pragma once

#include <string>
#include <iostream>

#define NORMAL "\033[0m"
#define RED "\033[31;1;1m"
#define GREEN "\033[32;1;1m"
#define YELLOW "\033[33;1;1m"

class ClapTrap
{
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;

public:
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);

	ClapTrap&	operator=(ClapTrap &);
};
