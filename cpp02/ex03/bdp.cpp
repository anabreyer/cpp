#include "Point.hpp"

bool	isLeft(Point a, Point b, Point p)
{
	return ((b.getx() - a.getx()) * (p.gety() - a.gety()) - (b.gety() - a.gety()) * (p.getx() - a.getx())) >= 0;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	return !(isLeft(a, b, point) || isLeft(b, c, point) || isLeft(c, a, point));
}