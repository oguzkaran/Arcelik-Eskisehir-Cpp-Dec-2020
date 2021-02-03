#ifndef DEVICE_HPP_
#define DEVICE_HPP_

#include <string>

class Device {
public:
	std::string m_name;
	int id;
	bool isOpen;
public:
	void open_device();
	bool insert_device();
	//...
};

#endif //DEVICE_HPP_
