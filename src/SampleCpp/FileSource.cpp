#include <iostream>
#include <cstdlib>
#include "FileSource.hpp"

FileSource::FileSource(const char* name) : m_file{name, "r"}
{
	if (!m_file.open()) {
		std::cerr << "Can not open file\n";
		std::exit(EXIT_FAILURE); //ileride exception firlatilacak
	}
}

int FileSource::getChar()
{
	int ch = m_file.getc();

	return ch == EOF ? -1 : ch;
}
