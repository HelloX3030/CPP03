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

	// Existing functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	// Getters
	std::string get_name() const;
	unsigned int get_hit_points() const;
	unsigned int get_energy_points() const;
	unsigned int get_attack_damage() const;

	// Setters
	void set_name(const std::string &new_name);
	void set_hit_points(unsigned int hp);
	void set_energy_points(unsigned int ep);
	void set_attack_damage(unsigned int ad);
};
