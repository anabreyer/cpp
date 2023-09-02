#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& p);
        Point&	operator = (const Point& p);
        ~Point();

        Fixed getx();
        Fixed gety();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);