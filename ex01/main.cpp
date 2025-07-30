#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bot1 = ClapTrap("Bot1");
	bot1.attack("Dummy1");
	bot1.takeDamage(20);
	bot1.beRepaired(14);
	bot1.attack("Dummy1");
	ClapTrap bot2 = ClapTrap("Bot2");
	bot2.beRepaired(5);
	bot2.takeDamage(3);
	for (int i = 0; i < 12; i++)
		bot2.attack("Dummy2");
	bot2.beRepaired(10);
}
