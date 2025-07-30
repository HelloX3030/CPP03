#include "ScavTrap.hpp"
#include <iostream>

#define RESET "\033[0m"
#define CYAN "\033[36m"

ScavTrap::ScavTrap()
	: ClapTrap("default_name", 100, 50, 20)
{
	std::cout << CYAN << "ScavTrap default constructor called. Initialized 'default_name' with 100 HP, 50 EP, and 20 AD." << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << CYAN << "ScavTrap constructor called for '" << name << "'." << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << CYAN << "ScavTrap destructor called for '" << get_name() << "'." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
	: ClapTrap(other)
{
	std::cout << CYAN << "ScavTrap copy constructor called. Cloned from '" << other.get_name() << "'." << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << CYAN << "ScavTrap assignment operator called." << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

// New Function
void ScavTrap::guardGate()
{
	std::cout << CYAN << "ScavTrap '" << get_name() << "' activated Gate Keeper Mode." << RESET << std::endl;
}
