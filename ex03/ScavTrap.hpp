#pragma once

#include "ClapTrap.hpp"

#define SCAV_TRAP_COLOR "\033[36m"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);

	// New Functions
	void guardGate();
};
