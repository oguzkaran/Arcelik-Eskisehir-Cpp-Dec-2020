#include "AnalyticalCircle.hpp"

using namespace csd::util;


AnalyticalCircle::AnalyticalCircle(double r, const Point& p) : AnalyticalCircle{r, p.x, p.y} //Circle { r }, m_center{ p }
{}

AnalyticalCircle::AnalyticalCircle(double r, int x, int y) : Circle{ r }, m_center{x, y}
{	
}

void AnalyticalCircle::setX(int x)
{
	m_center.x = x;
}

void AnalyticalCircle::setY(int y)
{
	m_center.y = y;
}

void AnalyticalCircle::setCenter(const Point& p)
{
	setX(p.x);
	setY(p.y);
}


void AnalyticalCircle::offset(int dxy)
{
	offset(dxy, dxy);
}

void AnalyticalCircle::offset(int dx, int dy)
{
	m_center.offset(dx, dy);
}
