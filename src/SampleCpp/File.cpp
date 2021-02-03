#include "File.hpp"

using namespace csd::util::io;

File::File(const char* path, const char* mode) : m_f{}, m_path { path }, m_mode{ mode }
{	
}

File::File(File&& r)
{
	m_f = r.m_f;
	r.m_f = nullptr;
	m_path = std::move(r.m_path);
	m_mode = std::move(r.m_mode);	
}

File &File::operator =(File&& r)
{
	if (&r == this)
		return *this;

	this->~File();
	m_f = r.m_f;
	r.m_f = nullptr;
	m_path = std::move(r.m_path);
	m_mode = std::move(r.m_mode);

	return *this;
}

File::~File()
{	
	if (m_f != nullptr)
		std::fclose(m_f);
}

bool File::open()
{
	m_f = std::fopen(m_path.c_str(), m_mode.c_str());

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

int File::getc()
{
	return std::fgetc(m_f);
}