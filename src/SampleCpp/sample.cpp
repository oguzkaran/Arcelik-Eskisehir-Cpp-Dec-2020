/*----------------------------------------------------------------------------------------------------------------------
	Aşağıdaki sink fonksiyonu ile herhangi bir unique_ptr nesnesi taşıma semantiği ile kullanılarak içerisindeki
	dinamik nesnenin delete edilmesi sağlanabilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "Complex.hpp"

template <typename T>
void sink(std::unique_ptr<T>)
{
}

int main()
{
	using namespace std;	
	
	auto cup{ make_unique<Complex>(3, 4) };

	cup.reset();

	return 0;
}
