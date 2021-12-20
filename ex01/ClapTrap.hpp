#pragma once

#include <string>
#include <iostream>

#define NORMAL "\033[0m"
#define RED "\033[31;1;1m"
#define GREEN "\033[32;1;1m"
#define YELLOW "\033[33;1;1m"
#define BLUE "\033[34m"

class ClapTrap
{
<<<<<<< HEAD
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string Name);
=======
protected:
	std::string	Name;
	unsigned int		Hitpoints;
	unsigned int		EnergyPoints;
	unsigned int		AttackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string Name);
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	virtual void	attack(std::string const &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);

<<<<<<< HEAD
	ClapTrap&	operator=(ClapTrap &);
=======
	ClapTrap	operator=(ClapTrap const &);
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
};

