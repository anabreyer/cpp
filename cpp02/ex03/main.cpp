#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
	Point	a(1, 3);
	Point	b(4, 6);
	Point	c(6, 2);
	Point	p[3] = {Point(1, 3), Point(3, 2), Point(6, 2)};

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Point: (" << p[i].getx() << ", " << p[i].gety() << ")";
		if (bsp(a, b, c, p[i]))
			std::cout << " is in the triangle\n";
		else
			std::cout << " is NOT in the triangle\n";
	}
	return 0;
}