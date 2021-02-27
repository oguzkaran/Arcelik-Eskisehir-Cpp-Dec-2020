/*----------------------------------------------------------------------------------------------------------------------
	Yukarıdaki fill fonksiyonunun STL karşılığı olan generate_n fonksiyonunun kullanımı
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm>
#include "Temperature.hpp"

int main()
{
	using namespace std;
	using com::arcelik::Temperature;

	srand(static_cast<unsigned int>(time(nullptr)));

	vector<Temperature> tvec;	
	list<Temperature> tlist;
	
	generate_n(back_inserter(tvec), 10, [min = -65, max = 95]{ return Temperature{rand() % (max - min) + min}; });
	for_each(cbegin(tvec), cend(tvec), [](const auto& t) {cout << t << ' ';});
	cout << '\n';

	copy_if(cbegin(tvec), cend(tvec), front_inserter(tlist), [](const auto& t) {return t < 0;});
	for_each(cbegin(tlist), cend(tlist), [](const auto& t) {cout << t << ' ';});
	cout << '\n';
	
	return 0;
}
