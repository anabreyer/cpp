#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed(): value(0)
{
    //std::cout << "Default constructor callde" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n) 
{
	// std::cout << "Int constructor called" << std::endl;
	value = n << fract;
}

Fixed::Fixed(float const n) 
{
	// std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(n * (1 << fract));
}

Fixed::Fixed(Fixed const &other)
{
    // std::cout << "Cop constructor called" << std::endl;
    *this = other;
}

Fixed&	Fixed::operator=(Fixed const &other)
{
    // std::cout << "Operator called" << std::endl;
    if (this != &other) {
		value = other.getRawBits();
	}
	return *this;
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	Fixed	result(this->toFloat() + other.toFloat());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	Fixed	result(this->toFloat() - other.toFloat());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	Fixed	result(this->toFloat() * other.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed	result(this->toFloat() / other.toFloat());
	return (result);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	Fixed	aux;

	aux = *this;

	if (!n)
		n = 1;
	this->setRawBits(this->getRawBits() + n);
	return (aux);
}

Fixed	Fixed::operator--(int n)
{
	Fixed	aux;

	aux = *this;

	if (!n)
		n = 1;
	this->setRawBits(this->getRawBits() - n);
	return (aux);
}

const Fixed &Fixed::min(Fixed const &copy1, Fixed const &copy2)
{
    if ( copy1 < copy2)
        return (copy1);
    return (copy2);
}

const Fixed &Fixed::max(Fixed const &copy1, Fixed const &copy2)
{
    if ( copy1 > copy2)
        return (copy1);
    return (copy2);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRAwBits member function called" << std::endl;
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