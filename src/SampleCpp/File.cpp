#include <iostream>
#include <cstring>
#include "File.hpp"

File::File() : m_f{nullptr}
{}

File::File(const char* path, const char* mode) : File{}
{
	std::strcpy(m_path, path);
	std::strcpy(m_mode, mode);
}

File::~File()
{	
	if (m_f != nullptr)
		std::fclose(m_f);
}

bool File::open()
{
	m_f = std::fopen(m_path, m_mode);

	return m_f != nullptr;
}


bool File::open(const char* path, const char* mode)
{
	m_f = std::fopen(path, mode);

	return m_f != nullptr;
}

void File::close()
{	
	std::fclose(m_f);
	m_f = nullptr;
}

int File::seek(long offset, long whence)
{
	return std::fseek(m_f, offset, whence);
}

void File::type() const
{
	std::fseek(m_f, 0, SEEK_SET);
	int ch;

	while ((ch = std::fgetc(m_f)) != EOF)
		putchar(ch);	
}