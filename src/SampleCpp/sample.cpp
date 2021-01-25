/*----------------------------------------------------------------------------------------------------------------------
	private türetmede sınıfın public ve protected bölümlerindeki elemanlar türemiş sınıfta private bölümde olur
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

class A {
public:
	void foo();
	void bar();
	int x;	
	double y;
};

class B : public A {
public:
	void tar();
	int z;
};

void A::foo()
{
	std::cout << "A::foo\n";
}

void A::bar()
{
	std::cout << "A::bar\n";
}

void B::tar()
{
	std::cout << "B::tar\n";
}

int main()
{	
	using namespace std;

	B b;

	b.x = 21;

	return 0;
}

