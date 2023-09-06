#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hp = 100;
    this->damage = 30;
    this->energy = 100;
    std::cout << "FragTrap " << this->name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag)  : ClapTrap(frag.name)
{
    std::cout << "FragTrap created" << std::endl;
    *this = frag;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap &frag)
{
    if (&frag != this)
    {
        this->hp = frag.hp;
        this->energy = frag.energy;
        this->damage = frag.damage;
        this->name = frag.name;
    }
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (this->hp == 0)
        std::cout << "[FragTrap] " << this->name << " cannot attack if (s)he is dead" << std::endl;
    else if (this->energy == 0)
        std::cout << "[FragTrap] " << this->name << " is too tired to attack" << std::endl;
    else
    {
        std::cout << "[FragTrap] " << this->name << " attacks " << target << " causing " << this->damage << " points of damage" << std::endl;
        this->energy -= 1;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "High Five!" << std::endl;
}