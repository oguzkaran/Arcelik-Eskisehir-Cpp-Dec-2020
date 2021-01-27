#include <cmath>
#include "Circle.hpp"

using namespace csd::util;

Circle::Circle(double radius, double pi)
{	
	setRadius(radius, pi);
}

void Circle::setRadius(double val)
{
	m_r = std::abs(val);	
}

void Circle::setRadius(double val, double pi)
{
	setRadius(val);
	setPI(pi);
}

void Circle::setPI(double pi)
{
	m_pi = 3 <= pi && pi < 3.20 ? pi : 3.14;	
}
