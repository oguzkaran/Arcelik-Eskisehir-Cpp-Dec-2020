#include "Complex.hpp"

std::ostream& operator<<(std::ostream& os, const Complex& r)
{
	return os << r.m_real << " + i" << r.m_imag;
}

std::istream& operator>>(std::istream& is, Complex& r)
{
	return is >> r.m_real >> r.m_imag;
}

Complex operator+(double val, const Complex& z)
{
	return Complex{ val + z.m_real, z.m_imag };
}

Complex operator-(double val, const Complex& z)
{
	return Complex{ val - z.m_real, -z.m_imag };
}

void Complex::setReal(double val)
{
	m_real = val;
}

void Complex::setImag(double val)
{
	m_imag = val;
}

Complex Complex::operator+(const Complex& other) const
{
	return Complex{m_real + other.m_real, m_imag + other.m_imag};
}

Complex Complex::operator+(double val) const
{
	return Complex{ m_real + val, m_imag };
}

Complex Complex::operator-(const Complex& other) const
{
	return *this + -other;
}

Complex Complex::operator-(double val) const
{
	return *this + -val;
}

Complex Complex::operator-() const
{
	return Complex{ -m_real,-m_imag };
}

Complex Complex::operator+() const
{
	return Complex{ *this };
}

Complex& Complex::Complex::operator++()
{
	++m_real;

	return *this;
}

Complex Complex::operator++(int)
{
	++m_real;

	return Complex{ m_real - 1, m_imag };
}

Complex& Complex::operator--()
{
	--m_real;

	return *this;
}

Complex Complex::operator--(int)
{
	--m_real;

	return Complex{ m_real + 1, m_imag };
}

bool Complex::operator==(const Complex& other) const
{
	return m_real == other.m_real && m_imag == other.m_imag;
}

bool Complex::operator!=(const Complex& other) const
{
	return !(*this == other);
}

Complex& Complex::operator+=(const Complex& other)
{
	*this = *this + other;

	return *this;
}

Complex::operator double() const
{
	return getNorm();
}

void Complex::operator()() const
{
	std::cout << *this << '\n';
}

Complex Complex::operator()(double val)
{
	return *this + val;
}