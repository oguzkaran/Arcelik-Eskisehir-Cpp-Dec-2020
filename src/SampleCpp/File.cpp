#include "File.hpp"

using namespace csd::util::io;

static auto fileDeleter = [](std::FILE* f) {if (f != nullptr) std::fclose(f);};

File::File(const char* path, const char* mode) : m_uptr{nullptr, nullptr}, m_path { path }, m_mode{ mode }
{}


bool File::open()
{
	m_uptr = std::unique_ptr<FILE, decltype(fileDeleter)>{ std::fopen(m_path.c_str(), m_mode.c_str()) };

	return m_uptr != nullptr;
}


bool File::open(const char* path, const char* mode)
{
	m_uptr = std::unique_ptr<FILE, decltype(fileDeleter)>{ std::fopen(path, mode) };

	return m_uptr != nullptr;
}

void File::close()
{		
	m_uptr = nullptr;
}

int File::seek(long offset, long whence)
{
	return std::fseek(m_uptr.get(), offset, whence);
}

void File::type() const
{
	std::fseek(m_uptr.get(), 0, SEEK_SET);
	int ch;

	while ((ch = std::fgetc(m_uptr.get())) != EOF)
		putchar(ch);	
}


void File::putc(int ch)
{
	std::fputc(ch, m_uptr.get());
}


int File::getc()
{
	return std::fgetc(m_uptr.get());
}