#include "Complex.hpp"

void Complex::setReal(double val)
{
	m_real = val;
}

void Complex::setImag(double val)
{
	m_imag = val;
}


Complex Complex::add(const Complex& other)
{
	return Complex{m_real + other.m_real, m_imag + other.m_imag};
}