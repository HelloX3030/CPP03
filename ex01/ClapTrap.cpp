#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: name("default_name"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << CLAP_TRAP_COLOR << "ClapTrap default constructor called. Initialized '" << name << "' with 10 HP, 10 EP, and 0 AD." << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << CLAP_TRAP_COLOR << "ClapTrap constructor called for '" << name << "'." << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage)
	: name(name), hit_points(hit_points), energy_points(energy_points), attack_damage(attack_damage)
{
	std::cout << CLAP_TRAP_COLOR << "ClapTrap constructor called for '" << name << "' HP " << hit_points << " EP " << energy_points << " AD " << attack_damage << "." << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << CLAP_TRAP_COLOR << "ClapTrap destructor called for '" << name << "'." << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name), hit_points(other.hit_points), energy_points(other.energy_points), attack_damage(other.attack_damage)
{
	std::cout << CLAP_TRAP_COLOR << "ClapTrap copy constructor called. Cloned from '" << other.name << "'." << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << CLAP_TRAP_COLOR << "ClapTrap assignment operator called." << RESET << std::endl;
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return *this;
}

std::string ClapTrap::get_name() const
{
	return name;
}

void ClapTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' is out of commission and cannot attack." << RESET << std::endl;
		return;
	}
	if (energy_points == 0)
	{
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' has no energy left to perform an attack." << RESET << std::endl;
		return;
	}
	energy_points--;
	std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' attacks '" << target
			  << "', dealing " << attack_damage << " damage! (EP left: " << energy_points << ")" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' is already destroyed. Further damage is meaningless." << RESET << std::endl;
		return;
	}
	if (amount >= hit_points)
	{
		hit_points = 0;
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' took " << amount << " damage and has been destroyed!" << RESET << std::endl;
	}
	else
	{
		hit_points -= amount;
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' took " << amount << " damage. Remaining HP: " << hit_points << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' cannot be repaired — it is already destroyed." << RESET << std::endl;
		return;
	}
	if (energy_points == 0)
	{
		std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' lacks the energy to repair itself." << RESET << std::endl;
		return;
	}
	energy_points--;
	hit_points += amount;
	std::cout << CLAP_TRAP_COLOR << "ClapTrap '" << name << "' repaired itself for " << amount
			  << " HP. Total HP: " << hit_points << ", EP left: " << energy_points << RESET << std::endl;
}
