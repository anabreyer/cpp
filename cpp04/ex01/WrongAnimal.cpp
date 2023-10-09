#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[WrongAnimal] Default Constructor called" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "[WrongAnimal] Copy Constructor called" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] Destuctor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal& other)
{
    std::cout << "[WrongAnimal] object assigned" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "*Random WrongAnimal Noises*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}