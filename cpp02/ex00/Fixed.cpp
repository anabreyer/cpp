#include "Fixed.hpp"

int Fixed::fract = 8;

Fixed::Fixed(): value(0)
{
    std::cout << "Default constructor callde" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed&	Fixed::operator=(Fixed const &other)
{
    std::cout << "Operator called" << std::endl;
    if (this != &other) {
		value = other.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRAwBits member function called" << std::endl;
    value = raw;
}


