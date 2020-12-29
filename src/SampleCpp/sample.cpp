/*----------------------------------------------------------------------------------------------------------------------
	C++'da sınıfların üye fonksiyonları (member functions) olabilir. Üye fonksiyonlar sınıf bildirimi içerisinde veya
	sınıf bildirimi dışında tanımlanabilir. Sınıf bildirimi içerisinde tanımlanan fonksiyonlar inline tanımlanmış
	kabul edilir. Üye fonksiyonun sınıf dışında tanımlanması sınıf ismi :: ile yapılır
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

class Sample {
public:
	int a;
	void foo()
	{
		//...
	}
	void bar();
private:
	double b;
};

void Sample::bar()
{
	//...
}


int main()
{	
	
	
	return 0;
}

