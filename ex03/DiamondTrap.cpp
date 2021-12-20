#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	this->guard_gate_mode = false;
	this->Name = std::string("Mr. Jonah");

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default and without name;" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : Name(Name)
{
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings;" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &init_obj)
{
	this->Hitpoints = init_obj.Hitpoints;
	this->EnergyPoints = init_obj.EnergyPoints;
	this->AttackDamage = init_obj.AttackDamage;

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with given settings;" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << RED
		<< " are dead" << NORMAL << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " attack " << target << ';' << " Given damage: " << this->AttackDamage << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;

	std::cout << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " takes damage. But we're in the" << GREEN << " Matrix" << NORMAL
		<< ", so he'll be fine; Taken damage: " << amount << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;

	std::cout << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " used cheat-code that repairs he's HP; Repaired HP: " << amount << std::endl;
}

void	DiamondTrap::highFivesGuys(void)
{

}

void	DiamondTrap::guardGate(void)
{

}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap &obj)
{
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;

	std::cout << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " stopped being himself and became someone else... what a shame;" << std::endl;

	return (*this);
}