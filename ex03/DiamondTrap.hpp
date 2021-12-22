#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	std::string	Name;

public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap&);
	DiamondTrap(std::string);
	~DiamondTrap();

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
	void	highFivesGuys(void);
	void	guardGate(void);
	void	whoAmI(void);

	DiamondTrap& operator=(DiamondTrap &DiamondTrap);
};
