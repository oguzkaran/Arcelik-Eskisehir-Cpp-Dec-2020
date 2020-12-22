/*----------------------------------------------------------------------------------------------------------------------
	Yukarıdaki örnek aşağıdaki gibi de yapılabilirdir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

int main()
{
	int a{ 10 };
	const int &pc = a;
	char* p = const_cast<char *>(reinterpret_cast<const char*>(pc));

	//...
	
	return 0;
}
