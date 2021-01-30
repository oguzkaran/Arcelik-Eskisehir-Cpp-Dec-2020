/*----------------------------------------------------------------------------------------------------------------------
	Bir fonksiyon final yapılarak override işlemine kapatılabilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>


class A {
public:
	virtual void foo() = 0;
};

class B : public A {
public:
	void foo() override final
	{}
};


class C : public B {
	void foo() override //error
	{}
};

int main()
{
	using namespace std;

	

	return 0;
}
