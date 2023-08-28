#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
     this->name = name;
     this->hp = 10;
     this->energy = 10;
     this->damage = 0;
    std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
    std::cout << "ClapTrap created" << std::endl;
    *this = clap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clap)
{
    if (&clap != this)
    {
        this->hp = clap.hp;
        this->energy = clap.energy;
        this->damage = clap.damage;
        this->name = clap.name;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "Quem e? " << target << std::endl;
    if (this->hp == 0)
        std::cout << this->name << " cannot attack if (s)he is dead" << std::endl;
    else if (this->energy == 0)
        std::cout << this->name << " is too tired to attack" << std::endl;
    else
    {
        std::cout << this->name << " attacks " << target << " causing " << this->damage << " points of damage" << std::endl;
        this->energy -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp == 0)
        std::cout << this->name << " cannot recive damage if (s)he are dead can you?" << std::endl;
    else
    {
        std::cout << this->name << "recived " << amount << " of damage :(" << std::endl;
        this->hp -= amount;
        if (this->energy == 0)
            std::cout << this->name << "died :(";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp == 0)
        std::cout << this->name << "cannot repaired itself while dead :|" << std::endl;
    else if(this->energy == 0)
        std::cout << this->name << "has no energy left to do a repair charm" << std::endl;
    else
    {
        std::cout << this->name << " has cast a repair charm and gets " << amount << " back" << std::endl;
        this->hp += amount;
        this->energy -= 1;
    }
}

int ClapTrap::get_hp()
{
    return (this->hp);
}

int ClapTrap::get_damage()
{
    return (this->damage);
}

int ClapTrap::get_energy()
{
    return (this->energy);
}

std::string ClapTrap::get_name()
{
    return (this->name);
}