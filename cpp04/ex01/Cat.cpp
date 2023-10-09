#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "[Cat] Copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "[Cat] Desturctor called" << std::endl;
}

Cat& Cat::operator = (const Cat &other)
{
    std::cout << "[Cat] object assigned" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "*MIAU MIAU*" << std::endl;
}