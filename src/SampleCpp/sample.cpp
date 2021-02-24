/*----------------------------------------------------------------------------------------------------------------------
	push_back fonksiyonları dopğrudan açıımda kullanılan türe ilişkin nesneyi alırlar
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include "Complex.hpp"

int main()
{
	using namespace std;

	vector<Complex> cvec;

	cvec.emplace_back(3, 4);
	cvec.emplace_back(5, 8);

	return 0;
}

