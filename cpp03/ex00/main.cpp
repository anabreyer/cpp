#include "ClapTrap.hpp"

void fight(ClapTrap &attacker, ClapTrap &target)
{
    attacker.attack(target.get_name());
    std::cout << target.get_name() << std::endl;
    std::cout << target.get_hp() << std::endl;
    target.takeDamage(attacker.get_damage());
}

int main()
{
    ClapTrap    aisha("aisha");
    ClapTrap    amanda("amanda");

    fight(aisha, amanda);
    // for (int i = 0; i < 10; i++)
    //     aisha.beRepaired(1);
    // for (int i = 0; i < 10; i++)
    // {
    //     aisha.takeDamage(2);
    //     amanda.takeDamage(2);
    // }
    return (0);
}