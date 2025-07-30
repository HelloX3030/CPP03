#pragma once

#include "ClapTrap.hpp"

#define CYAN "\033[36m"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);

	// New Functions
	void highFivesGuys();
};
