#include "ClapTrap.hpp"

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

	return (0);
}
