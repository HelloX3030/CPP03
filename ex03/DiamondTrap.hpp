#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define DIAMOND_TRAP_COLOR "\033[33m"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);

	void whoAmI();
};
