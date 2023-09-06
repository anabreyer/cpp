#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void fight(ClapTrap &attacker, ClapTrap &target)
{
    attacker.attack(target.get_name());
    target.takeDamage(attacker.get_damage());
}

int main()
{
    ClapTrap    aisha("aisha");
    ClapTrap    amanda("amanda");
    ScavTrap    jisu("jisu");
    FragTrap    ana("ana");

    fight(aisha, amanda);
    fight(aisha, amanda);
    for (int i = 0; i < 10; i++)
        aisha.beRepaired(1);
    for (int i = 0; i < 10; i++)
    {
        aisha.takeDamage(2);
        amanda.takeDamage(2);
    }
    jisu.guardGate();
    jisu.attack("hello");
    ana.highFivesGuys();
    ana.attack("jisu");
    return (0);
}