#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->Name = std::string("Mr. Jameson");

	std::cout << RED << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings and without name;" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;

	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings;" << std::endl;
}

FragTrap::FragTrap(const FragTrap &init_obj)
{
	this->Hitpoints = init_obj.Hitpoints;
	this->EnergyPoints = init_obj.EnergyPoints;
	this->AttackDamage = init_obj.AttackDamage;

	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " has been created with given settings;" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "[FragTrap]: " << YELLOW << this->Name << RED
		<< " are dead" << NORMAL << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " attack " << target << ';' << " Given damage: " << this->AttackDamage << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;

	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " takes damage. But we're in the" << GREEN << " Matrix" << NORMAL
		<< ", so he'll be fine; Taken damage: " << amount << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;

	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " used cheat-code that repairs he's HP; Repaired HP: " << amount << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " GiVEs hiGh101 fO Ya!" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap &obj)
{
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;

	std::cout << MAGENTA << "[FragTrap]: " << YELLOW << this->Name << NORMAL
		<< " stopped being himself and became someone else... what a shame;" << std::endl;

	return (*this);
}