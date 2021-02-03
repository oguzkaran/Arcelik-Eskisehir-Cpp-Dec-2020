/*----------------------------------------------------------------------------------------------------------------------
	Parser uygulaması ve test kodu. Çalışma zamanı çokbiçimliliği kullanılmıştır
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

#include "Parser.hpp"
#include "CharArraySource.hpp"
#include "FileSource.hpp"
#include "StringSource.hpp"

int main()
{
	using namespace std;

	FileSource fs{ "text.txt" };
	CharArraySource cs{ "Bugun hava cok \t\r\nguzel" };
	StringSource ss{ "Bugun hava cok cok guzel" };
	Parser p{ &cs };

	p.doParse();
	p.setSource(&fs);
	p.doParse();
	p.setSource(&ss);
	p.doParse();

	return 0;
}

