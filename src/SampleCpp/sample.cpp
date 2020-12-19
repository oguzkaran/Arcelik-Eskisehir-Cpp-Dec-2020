/*----------------------------------------------------------------------------------------------------------------------
	Aday Fonksiyonlar: 1, 2, 3, 4, 5
	Uygun fonksiyonlar: 2, 3
----------------------------------------------------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void foo();							//1
void foo(int);						//2
void foo(double, double = 3.4);		//3
void foo(char*);					//4
void foo(int, int);					//5

void bar()
{
	foo(4);
}

int main()
{	

	
	return 0;
}