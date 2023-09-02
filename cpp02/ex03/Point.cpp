#include "Point.hpp"

Point::Point(void)
{
    // std::cout << "Constructor called" << std::endl;
}

Point::Point(const float x, const float y): x(x), y(y)
{
    // std::cout << "Overload point contructor called" << std::endl;
}

Point::Point(const Point& p)
{
	*this = p;
}

Point&	Point::operator = (const Point& p) //copy assignment overload
{
	this->~Point();
	// std::cout << "copy assigment overload" << std::endl;
	new(this) Point(p.x.toFloat(), p.y.toFloat());
	return (*this);
}

Point::~Point(void)
{
    // std::cout << "Destructor callded" << std::endl;
}

Fixed Point::getx()
{
    return (this->x);
}

Fixed Point::gety()
{
    return (this->y);
}







