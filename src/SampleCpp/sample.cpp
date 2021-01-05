/*----------------------------------------------------------------------------------------------------------------------
	Sınıfın non-static elemanlarına sınıf ismi ve :: operatörü ile erişilemez
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

class Sample {
public:
	int a;	
	static bool b;
	//...
	static void foo();
	void bar();
};

bool Sample::b;

void Sample::foo()
{
	std::cout << "Sample::foo\n";
}

void Sample::bar()
{
	std::cout << "Sample::bar\n";
}

int main()
{
	std::cout << Sample::a << '\n'; //error
	Sample::bar(); //error

	return 0;
}
