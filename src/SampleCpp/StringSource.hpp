#pragma once

#include <string>
#include "ICharSource.hpp"

class StringSource :  public ICharSource {
private:
	std::string m_str;
	std::size_t m_index;
public:
	explicit StringSource(const char* str) : m_str{ str }, m_index{}
	{}

	int getChar() override;
};

