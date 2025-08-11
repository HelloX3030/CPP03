#include "DiamondTrap.hpp"
#include <iostream>

#define RESET "\033[0m"

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name", 100, 50, 30), FragTrap(), ScavTrap(), name("default_name")
{
	std::cout << DIAMOND_TRAP_COLOR << "DiamondTrap default constructor called for " << name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(), ScavTrap(), name(name)
{
	std::cout << DIAMOND_TRAP_COLOR << "DiamondTrap constructor called for " << name << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << DIAMOND_TRAP_COLOR << "DiamondTrap destructor called for " << name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name)
{
	std::cout << DIAMOND_TRAP_COLOR << "DiamondTrap copy constructor called for " << name << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << DIAMOND_TRAP_COLOR << "DiamondTrap assignment operator called." << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		name = other.name;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << DIAMOND_TRAP_COLOR << "DiamondTrap name: " << name << RESET << std::endl;
	std::cout << DIAMOND_TRAP_COLOR << "ClapTrap name: " << ClapTrap::get_name() << RESET << std::endl;
}
