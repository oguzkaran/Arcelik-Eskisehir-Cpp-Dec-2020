/*----------------------------------------------------------------------------------------------------------------------
	DynamicIntArray sınıfı ve test kodu
	(Detaylar gözardı edilmiştir)
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "DynamicIntArray.hpp"

int main()
{
	DynamicIntArray a{ 10 };

	a[0] = 10;
	a[1] = 30;

	{
		DynamicIntArray b{std::move(a)};		
		
		std::cout << b[0] << '\n';
		std::cout << b[1] << '\n';
	}	

	return 0;
}
