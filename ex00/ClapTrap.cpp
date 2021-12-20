#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	this->Name = std::string("Mr. Noname");

	std::cout << "A character " << YELLOW << this->Name << NORMAL
		<< " has been created with default and without name;" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name)
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

	std::cout << "A character " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings;" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &init_obj)
{
	this->Hitpoints = init_obj.Hitpoints;
	this->EnergyPoints = init_obj.EnergyPoints;
	this->AttackDamage = init_obj.AttackDamage;

	std::cout << "A character " << YELLOW << this->Name << NORMAL
		<< " has been created with given settings;" << std::endl;
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "A character " << YELLOW << this->Name << NORMAL
		<< " attack " << target << ';' << " Given damage: " << this->AttackDamage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;

	std::cout << "A character: " << YELLOW << this->Name << NORMAL
		<< " takes damage. But we're in the" << GREEN << " Matrix" << NORMAL
		<< ", so he'll be fine; Taken damage: " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;

	std::cout << "A character: " << YELLOW << this->Name << NORMAL
		<< " used cheat-code that repairs he's HP; Repaired HP: " << amount << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap &obj)
{
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;

	std::cout << "A character: " << YELLOW << this->Name << NORMAL
		<< " stopped being himself and became someone else... what a shame;" << std::endl;

	return (*this);
}