
#include "Point.hpp"

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed abc, abp, apc, pbc, somme;
	Fixed zero(0);

	abc = triangle_area(a, b, c);
	abp = triangle_area(a, b, point);
	apc = triangle_area(a, point, c);
	pbc = triangle_area(point, b, c);
	somme = abp + apc + pbc;
	if (abc.toInt() == somme.toInt() && abp > zero  && apc > zero && pbc > zero)
		return (true);
	return (false);
}

Fixed triangle_area(Point const &a, Point const &b, Point const &c)
{
	Fixed area;
	Fixed mult(0.5f);

	area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (area < 0)
		area = area * -1;
	area =  area * mult;
	return (area);
}
