#ifndef DYNAMICARRAY_HPP_
#define DYNAMICARRAY_HPP_

#include <cstddef>

class DynamicIntArray {
private:
	std::size_t m_capacity;	
	std::size_t m_size;
	int* m_elems;	
public:
	explicit DynamicIntArray(std::size_t capacity = 10);
	explicit DynamicIntArray(const DynamicIntArray& r);
	DynamicIntArray& operator =(const DynamicIntArray& r);
	explicit DynamicIntArray(DynamicIntArray&& r);
	DynamicIntArray& operator =(DynamicIntArray&& r);
	~DynamicIntArray();
	std::size_t capacity() const { return m_capacity; }
	std::size_t size() const { return m_size; }
public:
	int& operator[](std::size_t index);
	int operator[](std::size_t index) const;
};

#endif //DYNAMICARRAY_HPP_