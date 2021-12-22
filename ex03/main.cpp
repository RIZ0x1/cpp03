#include "DiamondTrap.hpp"

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

	FragTrap	cypher("Cypher");

	cypher.attack("Trinity");
	trinity.takeDamage(01);
	cypher.highFivesGuys();

	DiamondTrap	architect("Architect");

	architect.attack("Tomas Anderson");
	neo.takeDamage(-1);
	architect.attack("Tomas Anderson");
	neo.takeDamage(-1);
	neo.~ClapTrap();
	architect.highFivesGuys();

	return (0);
}
