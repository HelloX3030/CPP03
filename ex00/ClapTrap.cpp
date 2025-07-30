#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: name("default_name"), hit_points(10), energy_points(10), attack_damage(0)
{
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (other != this)
	{
	}
}

void ClapTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap is dead and can't attack!" << std::endl;
		return;
	}
	if (energy_points == 0)
	{
		std::cout << "CapTrap has no energy points left to attack!" << std::endl;
		return;
	}
	energy_points--;

	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "Clap Trap encountered a person with necrophilia!";
		return;
	}
	if (hit_points >= amount || amount == 0)
	{
		hit_points -= amount;
		std::cout << "ClapTrap has taken " << amount << " of damage!" << std::endl;
	}
	else
	{
		hit_points = 0;
		std::cout << "ClapTrap was punched to death with damage amount: " << amount << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points == 0)
	{
		std::cout << "ClapTrap has no energy to repair itselfe!" << std::endl;
		return;
	}
	energy_points--;

	if (hit_points == 0)
	{
		std::cout << "ClapTrap is already dead and can't repair itselfe" << std::endl;
		return;
	}

	hit_points += amount;
	std::cout << "ClapTrap has repaired " << amount << " hitpoints" << std::endl;
}
