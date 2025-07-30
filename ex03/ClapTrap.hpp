#pragma once

#include <string>

#define RESET "\033[0m"
#define CLAP_TRAP_COLOR "\033[35m"

class ClapTrap
{
private:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	std::string get_name() const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
