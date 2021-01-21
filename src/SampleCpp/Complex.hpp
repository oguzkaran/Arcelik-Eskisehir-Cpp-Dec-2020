#ifndef COMPLEX_HPP_ 
#define COMPLEX_HPP_

#include <iostream>
#include <cmath>

class Complex {
	friend std::istream& operator>>(std::istream& is, Complex& r);
	friend std::ostream& operator<<(std::ostream& os, const Complex& r);
	friend Complex operator+(double val, const Complex& z);
	friend Complex operator-(double val, const Complex& z);
private:
	double m_real, m_imag;
public:
	explicit Complex(double real = 0, double imag = 0) : m_real{ real }, m_imag{imag} {}
	double getReal() const { return m_real; }
	double getImag() const { return m_imag; }
	double getNorm() const { return std::sqrt(m_real * m_real + m_imag * m_imag); }

	void setReal(double val);
	void setImag(double val);
	
	Complex operator+(const Complex& other) const;
	Complex operator+(double val) const;
	Complex operator-(const Complex& other) const;
	Complex operator-(double val) const;

	Complex operator-() const;
	Complex operator+() const;
	Complex& operator++();
	Complex operator++(int);
	Complex& operator--();
	Complex operator--(int);

	bool operator==(const Complex& other) const;
	bool operator!=(const Complex& other) const;

	Complex&operator+=(const Complex& other);

	explicit operator double() const;

	void operator()() const;
	Complex operator()(double val);
};

#endif // COMPLEX_HPP_ 


