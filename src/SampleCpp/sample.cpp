/*----------------------------------------------------------------------------------------------------------------------
	noexcept bir fonksiyon içerisinde bir exception fırlatılması derleyici tarafından bir mesajla bildirilmek 
	zorunda değildir. Şüphesiz bu iyi bir yaklaşım değildir. Ayrıca noexcept bir fonksiyon exception fırlatsa
	bile bu exception hiçbir şekilde yakalanamaz ve terminate fonksiyonu çağrılır. C++ 'da exception fırlatmayacak
	bir fonksiyonun noexcept olarak bildirilmesi gerekir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <stdexcept>

void foo(int val) noexcept
{
	if (val < 0)
		throw std::invalid_argument{ "foo:invalid_argument" };

	std::cout << "foo:" << val << '\n';
}

void bar(int val)
{
	if (val < 0)
		throw std::invalid_argument{ "bar:invalid_argument" };

	std::cout << "bar:" << val << '\n';

}

int main()
{
	using namespace std;

	try {
		foo(-10);
	}
	catch (const invalid_argument& ex) {
		cout << ex.what() << '\n';
	}
	catch (...) {
		cout << "catch all\n";
	}

	return 0;
}

