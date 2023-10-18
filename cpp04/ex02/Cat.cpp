#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] Default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain; 
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "[Cat] Copy constructor called" << std::endl;
    this->type = "Cat";
	this->brain = new Brain;
	*this->brain = *other.brain;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "[Cat] Desturctor called" << std::endl;
}

Cat& Cat::operator = (const Cat &other)
{
    std::cout << "[Cat] object assigned" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "*MIAU MIAU*" << std::endl;
}

void	Cat::printBrain(void)
{
	for (int i = 0; i < 99; i++)
		std::cout << this->brain->getIdeas()[i] << ", ";
	std::cout << this->brain->getIdeas()[99] << "\n";
}

void	Cat::setBrain(std::string ideas)
{
	this->brain->setIdeas(ideas);
}