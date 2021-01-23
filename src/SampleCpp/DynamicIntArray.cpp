#include <cstring>
#include "DynamicIntArray.hpp"

DynamicIntArray::DynamicIntArray(std::size_t capacity) 
	: m_capacity{capacity > 0 ? capacity : 1}, m_size{ 0 }, m_elems{new int[m_capacity]}
{
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& r) : DynamicIntArray{r.m_capacity}
{
	std::memcpy(m_elems, r.m_elems, r.m_capacity * sizeof(int));
}

DynamicIntArray& DynamicIntArray::operator =(const DynamicIntArray& r)
{
	if (&r == this)
		return *this;

	delete[] m_elems;
	m_capacity = r.m_capacity;
	m_size = r.m_size;
	m_elems = new int[m_capacity];
	std::memcpy(m_elems, r.m_elems, m_capacity * sizeof(int));

	return *this;
}


DynamicIntArray::DynamicIntArray(DynamicIntArray&& r) 
	: m_capacity{ r.m_capacity }, m_size{ r.m_size }, m_elems{r.m_elems}
{
	r.m_elems = nullptr;
}

DynamicIntArray& DynamicIntArray::operator =(DynamicIntArray&& r)
{
	if (&r == this)
		return *this;

	delete[] m_elems;

	m_capacity = r.m_capacity;
	m_size = r.m_size;
	m_elems = r.m_elems;
	r.m_elems = nullptr;

	return *this;
}

DynamicIntArray::~DynamicIntArray()
{
	if (m_elems)
		delete[] m_elems;
}

int& DynamicIntArray::operator[](std::size_t index)
{
	return m_elems[index];
}

int DynamicIntArray::operator[](std::size_t index) const
{
	return m_elems[index];
}