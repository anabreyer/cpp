#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "[WrongCat] Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
    std::cout << "[WrongCat] Copy constructor called" << std::endl;
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] Desturctor called" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat &other)
{
    std::cout << "[WrongCat] object assigned" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "*MOO*" << std::endl;
}