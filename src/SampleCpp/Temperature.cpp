#include "Temperature.hpp"

Temperature operator+(int value, const Temperature& r)
{
	return Temperature{ value + r.m_value };
}

Temperature operator-(int value, const Temperature& r)
{
	return Temperature{ value - r.m_value };
}

Temperature Temperature::operator+(const Temperature& other) const
{
	return Temperature{ m_value + other.m_value };
}

Temperature Temperature::operator+(int value) const
{
	return Temperature{ m_value + value };
}

Temperature Temperature::operator-(const Temperature& other) const
{
	return Temperature{ m_value - other.m_value };
}

Temperature Temperature::operator-(int value) const
{
	return Temperature{ m_value - value };
}

Temperature::operator double() const
{
	return 1.8 * m_value + 32;
}

Temperature::operator int() const
{
	return m_value;
}

void Temperature::setValue(int value)
{
	//...
	m_value = value;
}

Temperature& Temperature::operator ++()
{
	++m_value;

	return *this;
}

Temperature Temperature::operator ++(int)
{
	Temperature temp{ *this };

	++* this;

	return temp;
}

Temperature& Temperature::operator --()
{
	--m_value;

	return *this;
}

Temperature Temperature::operator --(int)
{
	Temperature temp{ *this };

	--* this;

	return temp;
}

Temperature Temperature::operator +=(const Temperature& r)
{	
	return (*this = *this + r.m_value);
}