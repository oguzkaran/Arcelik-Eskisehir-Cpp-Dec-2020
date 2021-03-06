/*----------------------------------------------------------------------------------------------------------------------
	priority_queue sınıfı
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <numeric>
#include <queue>
#include <deque>
#include <list>
#include <functional>
#include "Temperature.hpp"

int main()
{
	using namespace std;
	using Temp = com::arcelik::Temperature;

	vector<Temp> tv(11);

	iota(begin(tv), end(tv), Temp{ -5 });
	priority_queue<Temp> pq(less<Temp>(), tv);

	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}

	cout << '\n';

	return 0;
}
