#include "utility.hpp"

#include <cstdlib>
#include <algorithm>
#include <iterator>

std::string generateRandomString(std::size_t n)
{	
	return generateRandomString(n, n + 1);
}

std::string generateRandomString(std::size_t min, std::size_t max)
{	
	using namespace std;

	auto n = rand() % (max - min) + min;
	std::string str;

	generate_n(back_inserter(str), n, [] {return static_cast<char>(std::rand() % 26 + (std::rand() % 2 ? 'A' : 'a'));});

	return str;
}