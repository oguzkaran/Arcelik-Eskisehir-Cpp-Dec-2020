/*----------------------------------------------------------------------------------------------------------------------
	partial_sort algoritması
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace std;

	vector<int> ivec{ 3, -4, 5, 8, 2, -9, 10 };

	partial_sort(ivec.begin(), ivec.begin() + 3, ivec.end());

	copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
	cout << '\n';
	
	return 0;
}
