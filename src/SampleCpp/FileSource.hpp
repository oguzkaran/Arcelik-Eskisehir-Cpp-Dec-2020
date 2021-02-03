#pragma once
#include "File.hpp"
#include "ICharSource.hpp"

using F = csd::util::io::File;

class FileSource : public ICharSource {
private:
	F m_file;
public:
	FileSource(const char* name);
	int getChar() override;
};

