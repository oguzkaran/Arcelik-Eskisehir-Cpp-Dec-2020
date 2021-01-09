#include <cstdio>
#include "File.hpp"

File::File() : f{nullptr}
{}

File::~File()
{
	if (f != nullptr)
		std::fclose(f);
}

bool File::open(const char* path, const char* mode)
{
	f = std::fopen(path, mode);

	return f != nullptr;
}

void File::close()
{	
	std::fclose(f);
	f = nullptr;
}

int File::seek(long offset, long whence)
{
	return std::fseek(f, offset, whence);
}

void File::type()
{
	std::fseek(f, 0, SEEK_SET);
	int ch;

	while ((ch = std::fgetc(f)) != EOF)
		putchar(ch);	
}