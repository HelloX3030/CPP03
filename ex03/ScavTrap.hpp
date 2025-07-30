#pragma once

#include "ClapTrap.hpp"

#define CYAN "\033[36m"

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
