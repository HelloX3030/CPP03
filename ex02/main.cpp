#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap bot1 = FragTrap("Bot1");
	bot1.attack("Dummy1");
	bot1.takeDamage(20);
	bot1.beRepaired(14);
	bot1.attack("Dummy1");
	FragTrap bot2 = FragTrap("Bot2");
	bot2.beRepaired(5);
	bot2.takeDamage(3);
	for (int i = 0; i < 12; i++)
		bot2.attack("Dummy2");
	bot2.beRepaired(10);
	std::cout << "========================================================================" << std::endl;
	FragTrap bot3 = FragTrap("Bot3");
	bot3.highFivesGuys();
	bot3 = bot2;
	bot3.attack("Dummy3");
}
