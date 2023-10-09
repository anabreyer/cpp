#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[Animal] Default Constructor called" << std::endl;
    this->type = "";
}

Animal::Animal(const Animal &other)
{
    std::cout << "[Animal] Copy Constructor called" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "[Animal] Destuctor called" << std::endl;
}

Animal&	Animal::operator = (const Animal& other)
{
    std::cout << "[Animal] object assigned" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "*Random Animal Noises*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
