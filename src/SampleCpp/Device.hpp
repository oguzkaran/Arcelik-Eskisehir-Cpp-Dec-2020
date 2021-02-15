#ifndef DEVICE_HPP_
#define DEVICE_HPP_

#include <string>
#include <vector>

class Device {
private:
	std::string m_name;
	int m_id;
	std::vector<int> m_port;
public:
	std::string getName() const { return m_name; }
	int getId() const { return m_id; }
	
	//...
};

#endif //DEVICE_HPP_
