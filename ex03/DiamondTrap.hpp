#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define YELLOW "\033[33m"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name; // same variable name as in ClapTrap

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);

	void whoAmI(); // new function to show names
};
