/*----------------------------------------------------------------------------------------------------------------------
	Point sınıfı ve kullanımı
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "Point.hpp"

int main()
{
	Point p1, p2;

	p1.x = 100;
	p1.y = 200;
	p2.x = 50;
	p2.y = -89;
	int x{ 50 };
	int y{ -89 };

	auto dist = p1.distance(p2);

	std::cout << "Distance:" << dist << '\n';

	dist = p1.distance();

	std::cout << "Distance:" << dist << '\n';

	dist = p1.distance(x, y);

	std::cout << "Distance:" << dist << '\n';

	return 0;
}