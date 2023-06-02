#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::Zombie()
{
    this->name = "(null)";
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie object " << this->name << " destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}