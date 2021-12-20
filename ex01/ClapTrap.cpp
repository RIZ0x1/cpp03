#include "ClapTrap.hpp"

<<<<<<< HEAD
ClapTrap::ClapTrap()
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	this->Name = std::string("Mr. Noname");

	std::cout << BLUE << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default and without name;" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name)
=======
ClapTrap::ClapTrap() : Name("Mr. Noname")
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

<<<<<<< HEAD
	std::cout << BLUE << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
=======
	std::cout << "(ClapTrap): A character " << YELLOW << this->Name << NORMAL
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
		<< " has been created with default settings;" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name)
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

	std::cout << "(ClapTrap): A character " << YELLOW << this->Name << NORMAL
		<< " has been created and named;" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &init_obj)
{
	this->Hitpoints = init_obj.Hitpoints;
	this->EnergyPoints = init_obj.EnergyPoints;
	this->AttackDamage = init_obj.AttackDamage;

<<<<<<< HEAD
	std::cout << BLUE << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
=======
	std::cout << "(ClapTrap): A character " << YELLOW << this->Name << NORMAL
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
		<< " has been created with given settings;" << std::endl;
}

ClapTrap::~ClapTrap()
{
<<<<<<< HEAD
	std::cout << RED << "[ClapTrap]: " << YELLOW << this->Name << RED
		<< " are dead" << NORMAL << std::endl;
=======
	std::cout << "(ClapTrap): A character " << YELLOW << this->Name << NORMAL
		<< " has been deleted;" << std::endl;	
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
}

void	ClapTrap::attack(std::string const &target)
{
<<<<<<< HEAD
	std::cout << BLUE << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
=======
	std::cout << "(ClapTrap): A character " << YELLOW << this->Name << NORMAL
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
		<< " attack " << target << ';' << " Given damage: " << this->AttackDamage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;

<<<<<<< HEAD
	std::cout << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
=======
	std::cout << "(ClapTrap): A character: " << YELLOW << this->Name << NORMAL
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
		<< " takes damage. But we're in the" << GREEN << " Matrix" << NORMAL
		<< ", so he'll be fine; Taken damage: " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;

<<<<<<< HEAD
	std::cout << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
=======
	std::cout << "(ClapTrap): A character: " << YELLOW << this->Name << NORMAL
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
		<< " used cheat-code that repairs he's HP; Repaired HP: " << amount << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap &obj)
{
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;

	std::cout << "[ClapTrap]: " << YELLOW << this->Name << NORMAL
		<< " stopped being himself and became someone else... what a shame;" << std::endl;

	return (*this);
}