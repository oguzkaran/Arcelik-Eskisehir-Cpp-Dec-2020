/*----------------------------------------------------------------------------------------------------------------------
	C++ 14 ile birlikte yukarıdaki örnek için geri dönüş değeri yazılmayabilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
	using namespace std;

	int a[]{ 3, -9, 7, 8, 34, -90 };

	sort(a, a + 6, [](int a, int b) {return a < b;});
	copy(a, a + 6, ostream_iterator<int>(cout, " "));

	cout << '\n';
	
	return 0;
}

