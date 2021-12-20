#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	this->Name = std::string("Mr. Jonah");

	std::cout << RED << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default and without name;" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : Name(Name)
{
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;

	std::cout << RED << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings;" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &init_obj)
{
	this->Hitpoints = init_obj.Hitpoints;
	this->EnergyPoints = init_obj.EnergyPoints;
	this->AttackDamage = init_obj.AttackDamage;

	std::cout << RED << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with given settings;" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "[ScavTrap]: " << YELLOW << this->Name << RED
		<< " are dead" << NORMAL << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << RED << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " attack " << target << ';' << " Given damage: " << this->AttackDamage << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;

	std::cout << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " takes damage. But we're in the" << GREEN << " Matrix" << NORMAL
		<< ", so he'll be fine; Taken damage: " << amount << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;

	std::cout << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " used cheat-code that repairs he's HP; Repaired HP: " << amount << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap &obj)
{
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;

	std::cout << "[ScavTrap]: " << YELLOW << this->Name << NORMAL
		<< " stopped being himself and became someone else... what a shame;" << std::endl;

	return (*this);
}