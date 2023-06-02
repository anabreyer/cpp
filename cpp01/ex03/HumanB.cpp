#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    std::cout << "HumanB " << name << " created with no wepons" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << name << " destroyed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << \
    this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}