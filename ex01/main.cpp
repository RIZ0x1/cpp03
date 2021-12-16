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

	std::cout << YELLOW << "Mr. Smith" << NORMAL << " is dead. But we're in the "
		<< GREEN << "Matrix..." << NORMAL << std::endl;

	return (0);
}
