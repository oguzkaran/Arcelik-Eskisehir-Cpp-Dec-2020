#pragma once

#include <cstddef>
#include "ICharSource.hpp"

class CharArraySource : public ICharSource {
private:
	char m_s[1024];
	std::size_t m_n;
	std::size_t m_index{};
public:
	CharArraySource(const char* s);
	int getChar() override;
};

