#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	this->in_guard_gate_mode = false;
	this->Name = std::string("Mr. Jonah");

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings and without name;" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), FragTrap(Name), ScavTrap(Name)
{
	this->Name = Name;
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

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " takes damage. But we're in the" << GREEN << " Matrix" << NORMAL
		<< ", so he'll be fine; Taken damage: " << amount << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " used cheat-code that repairs he's HP; Repaired HP: " << amount << std::endl;
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " GiVEs hiGh101 fO Ya!" << std::endl;
}

void	DiamondTrap::guardGate(void)
{
	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL << std::endl;

	if (this->in_guard_gate_mode)
		std::cout << " intered into guard gate mode;" << std::endl;
	else
		std::cout << " exited from guard gate mode;" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << RED << "[DiamondTrap]: " << "My name is " << YELLOW << this->Name << NORMAL << std::endl;
	std::cout << RED << "[DiamondTrap]: " << "My father's name is " << YELLOW << ClapTrap::Name << NORMAL << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap &obj)
{
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;

	std::cout << RED << "[DiamondTrap]: " << YELLOW << this->Name << NORMAL
		<< " stopped being himself and became someone else... what a shame;" << std::endl;

	return (*this);
}
