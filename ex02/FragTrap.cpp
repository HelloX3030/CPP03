#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
	: ClapTrap("default_name", 100, 100, 30)
{
	std::cout << FRAG_TRAP_COLOR << "FragTrap default constructor called. Initialized 'default_name' with 100 HP, 50 EP, and 20 AD." << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, 100, 10, 30)
{
	std::cout << FRAG_TRAP_COLOR << "FragTrap constructor called for '" << name << "'." << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << FRAG_TRAP_COLOR << "FragTrap destructor called for '" << get_name() << "'." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other)
{
	std::cout << FRAG_TRAP_COLOR << "FragTrap copy constructor called. Cloned from '" << other.get_name() << "'." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << FRAG_TRAP_COLOR << "FragTrap assignment operator called." << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

// New Function
void FragTrap::highFivesGuys()
{
	std::cout << FRAG_TRAP_COLOR << "FragTrap '" << get_name() << "' is asking for a high five! ✋" << RESET << std::endl;
}
