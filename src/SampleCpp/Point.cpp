#include <iostream>
#include "Point.hpp"

void Point::display()
{
	std::cout << "{x : " << x << ", y : " << y << "}\n";
}

void Point::offset(int dxy)
{
	offset(dxy, dxy);
}

void Point::offset(int dx, int dy)
{
	x += dx;
	y += dy;
}