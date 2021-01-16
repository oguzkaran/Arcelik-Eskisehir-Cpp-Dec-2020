/*----------------------------------------------------------------------------------------------------------------------
	Sınıfın özel üye fonksiyonları (special member functions)
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "Complex.hpp"

int main()
{
	Complex z1{ 3, 4 };
	Complex z2{ 6, 7 };
	Complex z;

	z = z1 + z2; //z1.operator+(z2);

	std::cout << z.getReal() << " + i" << z.getImag() << '\n';
		
	return 0;
}
