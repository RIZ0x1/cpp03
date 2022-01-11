#pragma once

#include <string>
#include <iostream>

#define NORMAL	"\033[0m"
#define ORANGE	"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"

class ClapTrap
{
protected:
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	virtual void	attack(std::string const &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);

	ClapTrap&	operator=(ClapTrap &);
};
