#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace csd::util;

void Point::offset(int dxy)
{
	offset(dxy, dxy);
}

void Point::offset(int dx, int dy)
{
	x += dx;
	y += dy;
}

double Point::distance(const Point& r) const
{
	return distance(r.x, r.y);
}

double Point::distance(int a, int b) const
{
	return std::sqrt((x - a) * (x - a) + (y - b) * (y - b));
}

void Point::display() const
{
	std::cout << "{x : " << x << ", y : " << y << "}\n";
}
