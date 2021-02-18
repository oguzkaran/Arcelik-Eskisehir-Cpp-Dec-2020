/*----------------------------------------------------------------------------------------------------------------------
	Aşağıdaki örnekte Lambda ifadesinde r ve x değişkenleri bildirilmiştir. x = x + 5 ildeğer verme ifadesinde soldaki
	x yeni tanımlanmış bir değişkendir. Lamda içerisinde değer semantiği ile kullanılabilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <iterator>

int main()
{
	using namespace std;
	
	int x = 10;	

	auto y = [&r = x, x = x + 5]() -> int {
		r += 3;		
		return x + 3;
	}();	

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	return 0;
}

