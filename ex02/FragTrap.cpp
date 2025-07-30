#include "FragTrap.hpp"
#include <iostream>

#define RESET "\033[0m"
#define GREEN "\033[32m"

FragTrap::FragTrap()
	: ClapTrap("default_name", 100, 50, 20)
{
	std::cout << GREEN << "FragTrap default constructor called. Initialized 'default_name' with 100 HP, 50 EP, and 20 AD." << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << GREEN << "FragTrap constructor called for '" << name << "'." << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap destructor called for '" << get_name() << "'." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other)
{
	std::cout << GREEN << "FragTrap copy constructor called. Cloned from '" << other.get_name() << "'." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << GREEN << "FragTrap assignment operator called." << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

// New Function
void FragTrap::highFivesGuys()
{
	std::cout << GREEN << "FragTrap '" << get_name() << "' is asking for a high five! ✋" << RESET << std::endl;
}
