#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	smith("Mr. Smith");
	ClapTrap	neo("Tomas Anderson");

	smith.attack("Tomas Anderson");
	neo.takeDamage(3);
	neo.attack("Mr. Smith");
	smith.takeDamage(3);
	neo.attack("Mr. Smith");
	smith.takeDamage(4);

	ScavTrap	trinity("Trinity");

	trinity.attack("Mr. Smith");
	smith.takeDamage(0);
	neo.attack("Trinity");
	trinity.takeDamage(100);

	return (0);
}
