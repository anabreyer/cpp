#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "[Brain] Default contrusctor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "[Brain] Destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "[Brain] Copy contrustor called" << std::endl;
    *this = other;
}

Brain& Brain::operator = (const Brain &other)
{
    std::cout << "[Brain] object assigend" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

void	Brain::setIdeas(std::string ideas)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas;
}

std::string*	Brain::getIdeas(void)
{
	return(this->ideas);
}

