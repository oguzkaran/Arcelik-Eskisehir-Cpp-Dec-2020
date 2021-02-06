#include "utility.hpp"

#include <cstdlib>

std::string generateRandomString(std::size_t n)
{	
	std::string str;

	for (std::size_t i{ 0 }; i < n; ++i) {
		char ch = static_cast<char>(std::rand() % 26 + (std::rand() % 2 ? 'A' : 'a'));

		str.append(ch + std::string{});
	}

	return str;
}