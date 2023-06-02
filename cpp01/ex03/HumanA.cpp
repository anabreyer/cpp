#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
    std::cout << "HumanA " << name << " created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << name << " destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << \
    this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}