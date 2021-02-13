#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <stdexcept>
#include <string>
#include <cstddef>

template <typename T, std::size_t N>
class Array {
private:
	T m_t[N];
private:
	T& get(std::size_t index);
public:
	constexpr Array() {}
	constexpr std::size_t size() const { return N; }
public:	
	constexpr T& operator [](std::size_t index);
	constexpr T& operator [](std::size_t index) const;
	constexpr T& at(std::size_t index);
	constexpr T& at(std::size_t index) const;
	//...
};


template <typename T, std::size_t N>
T& Array<T, N>::get(std::size_t index)
{
	if (index >= N)
		throw std::out_of_range{ "index out of range:" + std::to_string(index) };
}

template <typename T, std::size_t N>
constexpr T& Array<T, N>::operator [](std::size_t index)
{
	return m_t[index];
}

template <typename T, std::size_t N>
constexpr T& Array<T, N>::operator [](std::size_t index) const
{
	return m_t[index];
}

template <typename T, std::size_t N>
constexpr T& Array<T, N>::at(std::size_t index)
{	
	return get(index);
}

template <typename T, std::size_t N>
constexpr T& Array<T, N>::at(std::size_t index) const
{
	return get(index);
}

#endif // ARRAY_HPP_

