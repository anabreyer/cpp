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

Fixed::Fixed(int const n) 
{
	std::cout << "Int constructor called" << std::endl;
	value = n << fract;
}

Fixed::Fixed(float const n) 
{
	std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(n * (1 << fract));
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

float Fixed::toFloat( void ) const
{
    return (float)value / (float)(1 << fract);
}

int Fixed::toInt( void ) const
{
    return (int)(value << fract);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
	return o;
}