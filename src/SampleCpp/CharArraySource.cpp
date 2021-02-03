#include <cstring>

#include "CharArraySource.hpp"

using namespace std;

CharArraySource::CharArraySource(const char* s) : m_n{ strlen(s) }, m_index{}
{	
	strcpy(m_s, s);
}

int CharArraySource::getChar()
{
	return m_index == m_n ? -1 : m_s[m_index++];
}
