#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] Default constructor called" << std::endl;
    this->type = "Dog";
    thsi->brain = new Brain;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog &other)
{
    std::cout << "[Dog] object assigned" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "*AU AU AU*" << std::endl;
}