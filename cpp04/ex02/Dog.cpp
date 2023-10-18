#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain;
    *this->brain = *other.brain;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "[Dog] Destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog &other)
{
    std::cout << "[Dog] object assigned" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "*AU AU AU*" << std::endl;
}

void Dog::printBrain()
{
    for(int i = 0; i < 99; i++)
        std::cout << this->brain->getIdeas()[i] << ", ";
    std::cout << this->brain->getIdeas()[99] << std::endl;
}

void Dog::setBrain(std::string ideas)
{
    this->brain->setIdeas(ideas);
}