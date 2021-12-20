#include "ScavTrap.hpp"

<<<<<<< HEAD
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
=======
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
>>>>>>> 50c8cf15acfc7acbf10922b8065810dc4f72f524
