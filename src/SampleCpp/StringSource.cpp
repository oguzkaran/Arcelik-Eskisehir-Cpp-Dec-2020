#include "StringSource.hpp"

int StringSource::getChar()
{
	return m_index == m_str.size() ? -1 : m_str[m_index++];
}