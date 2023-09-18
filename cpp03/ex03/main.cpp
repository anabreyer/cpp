#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void fight(ClapTrap &attacker, ClapTrap &target)
{
    attacker.attack(target.get_name());
    target.takeDamage(attacker.get_damage());
}

int main()
{
    	DiamondTrap	hello("hello");

	for (int i = 0; i < 10; i++)
		hello.beRepaired(1);
	hello.attack("hey");
	for (int i = 0; i < 11; i++)
		hello.takeDamage(10);
	hello.attack("heyy");
	return 0;
}