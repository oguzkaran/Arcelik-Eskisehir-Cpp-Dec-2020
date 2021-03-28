/*----------------------------------------------------------------------------------------------------------------------
	set container sınıfı
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <memory>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> generateNumbers()
{
	using namespace std;

	set<int> nset;

	while (nset.size() != 6)
		nset.insert(rand() % 49 + 1);

	vector<int> nvec;
	copy(nset.begin(), nset.end(), back_inserter(nvec));
	stable_sort(nvec.begin(), nvec.end());

	return nvec;
}

int main()
{
	using namespace std;	
	srand(static_cast<unsigned int>(time(nullptr)));
	size_t n;

	cout << "Kac kupon oynamak istersiniz?";
	cin >> n;

	for (size_t i{}; i < n; ++i) {
		auto numbers = generateNumbers();
		copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " "));
		cout << '\n';
	}
	
	return 0;
}

