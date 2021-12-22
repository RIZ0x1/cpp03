#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

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
