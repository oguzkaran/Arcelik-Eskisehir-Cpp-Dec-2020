/*----------------------------------------------------------------------------------------------------------------------
	Aşağıdaki örnekte A sınıfının foo fonksiyonu B sınıfında private bölüme çekilmiştir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

class A {
public:
	int x;
	void foo()
	{
	}
};

class B : public A {
private:
	using A::foo;
};

int main()
{	
	using namespace std;
	
	B b{};
	A a{ };
	
	b.x = 20;
	b.foo(); //error
	a.foo();
	
	return 0;
}

