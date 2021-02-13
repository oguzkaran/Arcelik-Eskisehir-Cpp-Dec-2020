#ifndef UNIT_HPP_
#define UNIT_HPP_

#include <iostream>

template <typename T>
class Unit {
	template <typename K>
	friend std::ostream& operator <<(std::ostream& os, const Unit<K>& r);
private:
	T m_t;
public:
	constexpr explicit Unit(const T& r = T{}) : m_t{ r }
	{}
public:
	T get() const { return m_t; }
	void set(const T& t);
};

template <typename T>
void Unit<T>::set(const T& t)
{
	m_t = t;
}

template <typename K>
std::ostream& operator <<(std::ostream& os, const Unit<K>& r)
{
	return os << r.m_t;
}


#endif // UNIT_HPP_

