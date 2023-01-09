#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap bob("Bob");
	FragTrap alice("Alice");

	bob.guardGate();
	bob.attack("alice");
	alice.highFivesGuys();
}
