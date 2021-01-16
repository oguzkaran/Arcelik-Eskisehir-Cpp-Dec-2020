
#ifndef COMPLEX_HPP_ 
#define COMPLEX_HPP_

class Complex {
	double m_real, m_imag;
public:
	Complex(double real = 0, double imag = 0) : m_real{ real }, m_imag{imag} {}
	double getReal() const { return m_real; }
	double getImag() const { return m_imag; }

	void setReal(double val);
	void setImag(double val);

	Complex add(const Complex& other);
};

#endif // COMPLEX_HPP_ 


