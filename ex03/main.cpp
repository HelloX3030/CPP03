#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap dt1("Diamond1");
	dt1.print();
	dt1.attack("Target1");
	dt1.takeDamage(25);
	dt1.beRepaired(10);
	dt1.attack("Target1");

	DiamondTrap dt2("Diamond2");
	dt2.beRepaired(7);
	dt2.takeDamage(5);
	for (int i = 0; i < 10; i++)
		dt2.attack("Target2");
	dt2.beRepaired(15);

	std::cout << "========================================================================" << std::endl;

	DiamondTrap dt3("Diamond3");
	dt3.highFivesGuys();
	dt3.guardGate();
	dt3.whoAmI();
	dt3 = dt2;
	dt3.attack("Target3");

	return 0;
}
