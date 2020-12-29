#ifndef DEVICE_HPP_
#define DEVICE_HPP_

class Device {
public:
	char name[100];
	int id;
	bool isOpen;
public:
	void open_device();
	bool insert_device();
	//...
};

#endif //DEVICE_HPP_
