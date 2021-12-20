#include "ScavTrap.hpp"
<<<<<<< HEAD
=======

#define NORMAL "\033[0m"
#define RED "\033[31;1;1m"
#define GREEN "\033[32;1;1m"
#define YELLOW "\033[33;1;1m"
#define BLUE "\033[34m"
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524

int	main()
{
	ScavTrap	smith("Mr. Smith");
	ScavTrap	neo("Tomas Anderson");

	smith.attack("Tomas Anderson");
	neo.takeDamage(3);
	neo.attack("Mr. Smith");
	smith.takeDamage(3);
	neo.attack("Mr. Smith");
	smith.takeDamage(4);

	ScavTrap	trinity("Trinity");

<<<<<<< HEAD
	trinity.attack("Mr. Smith");
	smith.takeDamage(0);
	neo.attack("Trinity");
	trinity.takeDamage(100);
=======
	trinity.guardGate();
	trinity.attack("Mr. Smith");
	trinity.guardGate();

	std::cout << RED << "Simulation cleanup process started..." << NORMAL << std::endl;
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524

	return (0);
}
