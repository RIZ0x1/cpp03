#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Name = "Mr. Noname";
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->guard_gate_mode = false;

	std::cout << "(ScavTrap): A character " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings;" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &init_obj) : ClapTrap()
{
	this->Name = init_obj.Name;
	this->Hitpoints = init_obj.Hitpoints;
	this->EnergyPoints = init_obj.EnergyPoints;
	this->AttackDamage = init_obj.AttackDamage;
	this->guard_gate_mode = init_obj.guard_gate_mode;

	std::cout << "(ScavTrap (copy constructor)): A character " << YELLOW << this->Name << NORMAL
		<< " has been created with default settings;" << std::endl;
}

ScavTrap::ScavTrap(const std::string &Name)
{
	this->Name = Name;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->guard_gate_mode = false;

	std::cout << "(ScavTrap): A character " << YELLOW << this->Name << NORMAL
		<< " has been created and named;" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap): A character " << YELLOW << this->Name << NORMAL
		<< " has been deleted;" << std::endl; 
}

void		ScavTrap::guardGate()
{
	this->guard_gate_mode = !this->guard_gate_mode;

	std::cout << "(ScavTrap): A character " << YELLOW << this->Name << NORMAL
		<< " changed his mode to ";

	if (this->guard_gate_mode)
		std::cout << RED << "'guard gate'" << NORMAL << std::endl;
	else
		std::cout << BLUE << "'normal'" << NORMAL << std::endl;
}

ScavTrap	ScavTrap::operator=(ScavTrap const &obj)
{
	this->Name = obj.Name;
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;
	this->guard_gate_mode = obj.guard_gate_mode;

	return (*this);
}
