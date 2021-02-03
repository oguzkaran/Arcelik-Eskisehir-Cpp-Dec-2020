#include <cctype>
#include <iostream>
#include "Parser.hpp"

void Parser::setSource(ICharSource* pSource)
{
	m_pSource = pSource;
}

void Parser::doParse() const 
{
	using namespace std;
	size_t count{ 0 };

	int ch;

	while ((ch = m_pSource->getChar()) != -1)
		if (isspace(ch))
			++count;

	cout << "Count:" << count << '\n';
}
