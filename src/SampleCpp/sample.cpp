/*----------------------------------------------------------------------------------------------------------------------
	Circle sınıfı ve test kodu
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "Circle.hpp"

int main()
{
	Circle c1{  };	

	std::cout << "Radius:" << c1.getRadius() << '\n';
	std::cout << "Alan:" << c1.getArea() << '\n';
	std::cout << "Circumference:" << c1.getCircumference() << '\n';	

	return 0;
}
