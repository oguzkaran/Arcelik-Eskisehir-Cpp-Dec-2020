#ifndef FILE_HPP_
#define FILE_HPP_

#include <cstdio>

class File {
public:
	std::FILE* f;
	File();
	~File();
	bool open(const char* path, const char* mode);
	void close();
	int seek(long offset, long whence);
	void type();
};


#endif //FILE_HPP_
