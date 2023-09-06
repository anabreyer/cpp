#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hp = 100;
    this->damage = 20;
    this->energy = 50;
    std::cout << "ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)  : ClapTrap(scav.name)
{
    std::cout << "ScavTrap created" << std::endl;
    *this = scav;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &scav)
{
    if (&scav != this)
    {
        this->hp = scav.hp;
        this->energy = scav.energy;
        this->damage = scav.damage;
        this->name = scav.name;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hp == 0)
        std::cout << "[ScavTrap] " << this->name << " cannot attack if (s)he is dead" << std::endl;
    else if (this->energy == 0)
        std::cout << "[ScavTrap] " << this->name << " is too tired to attack" << std::endl;
    else
    {
        std::cout << "[ScavTrap] " << this->name << " attacks " << target << " causing " << this->damage << " points of damage" << std::endl;
        this->energy -= 1;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "[ScavTrap] " << name << " is on Gate keeper mode" << std::endl;
}