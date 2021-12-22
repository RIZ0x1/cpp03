#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	neo("Tomas Anderson");

	neo.whoAmI();

	std::cout << std::endl;
	std::cout << BLUE << "IT'S " << YELLOW << "TIME " << GREEN << "TO " << RED << "DIE!" << NORMAL << std::endl;
	std::cout << std::endl;

	return (0);
}
