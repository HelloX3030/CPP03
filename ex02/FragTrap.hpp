#pragma once

#include "ClapTrap.hpp"

#define FRAG_TRAP_COLOR "\033[32m"

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
