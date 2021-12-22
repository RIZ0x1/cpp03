#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	bool	in_guard_gate_mode;

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

	DiamondTrap& operator=(DiamondTrap &DiamondTrap);	
};