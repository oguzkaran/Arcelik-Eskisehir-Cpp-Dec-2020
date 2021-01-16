#include "Date.hpp"

std::ostream& operator <<(std::ostream& os, const Date& r)
{
	os << r.m_day << "/" << r.m_month << '/' << r.m_year;

	return os;
}

std::istream &operator >>(std::istream& is, Date& r)
{
	is >> r.m_day >> r.m_month >> r.m_year;

	return is;
}


void Date::setDay(int value)
{
	//...
	m_day = value;
}

void Date::setMonth(int value)
{
	//...
	m_month = value;
}

void Date::setYear(int value)
{
	//...
	m_year = value;
}