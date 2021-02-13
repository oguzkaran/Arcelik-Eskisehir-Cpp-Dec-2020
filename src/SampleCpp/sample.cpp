/*----------------------------------------------------------------------------------------------------------------------
	Aşağıdaki örnekte * ve -> operatör fonksiyonları tanımlanmış bir gösterici sınıfı yazılmıştır
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "Unit.hpp"

template <typename T>
class MyPointer {
private:
	T* m_p;
public:
	explicit MyPointer(T* p) : m_p{ p }
	{}
public:
	constexpr T& operator *()
	{
		return *m_p;
	}

	constexpr T& operator *() const
	{
		return *m_p;
	}

	constexpr T* operator ->()
	{
		return m_p;
	}

	constexpr T* operator ->() const
	{
		return m_p;
	}
};

int main()
{
	using namespace std;
	int a = 10;
	MyPointer<int> mp{ &a };
	
	*mp *= 3;

	cout << a << '\n';
	cout << *mp << '\n';

	cout << "/////////////////////////\n";

	Unit<int> iunit{ 67 };
	MyPointer<Unit<int>> ump{ &iunit };

	ump->set(ump->get() * 2);

	cout << iunit.get() << '\n';
	cout << ump->get() << '\n';

	(*ump).set(34);

	cout << iunit.get() << '\n';
	cout << ump->get() << '\n';

	return 0;
}
