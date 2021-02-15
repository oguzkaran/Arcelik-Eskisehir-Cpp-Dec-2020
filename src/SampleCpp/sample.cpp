/*----------------------------------------------------------------------------------------------------------------------
	Algoritmalardan bazıları aşağıdaki gibi callback fonksiyon alırlar
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <algorithm>

bool is_even(int val)
{
	return val % 2 == 0;
}

class IsOddFunctor {
	//...
public:
	bool operator ()(int a)
	{
		return a % 2 != 0;
	}
};

int main()
{
	using namespace std;

	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[10];	
	int c[10];

	auto last = copy_if(a, a + 10, b, [](int val) {return val % 2 == 0;});

	for (auto iter = b; iter != last; ++iter)
		cout << *iter << ' ';

	cout << '\n';

	last = copy_if(a, a + 10, c, [](int val) {return val % 2 != 0;});

	for (auto iter = c; iter != last; ++iter)
		cout << *iter << ' ';

	cout << '\n';
	
	return 0;
}
