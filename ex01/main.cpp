#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap bot1 = ScavTrap("Bot1");
	bot1.attack("Dummy1");
	bot1.takeDamage(20);
	bot1.beRepaired(14);
	bot1.attack("Dummy1");
	ScavTrap bot2 = ScavTrap("Bot2");
	bot2.beRepaired(5);
	bot2.takeDamage(3);
	for (int i = 0; i < 12; i++)
		bot2.attack("Dummy2");
	bot2.beRepaired(10);
	std::cout << "========================================================================" << std::endl;
	ScavTrap bot3 = ScavTrap("Bot3");
	bot3.guardGate();
	bot3 = bot2;
	bot3.attack("Dummy3");
}
