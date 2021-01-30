#pragma once

#include <cstring>

class Employee {
private:
	char m_citizenId[12];
	char m_name[100];
	char m_address[256];
public:
	Employee(const char* citizenId, const char* name, const char* address)
	{
		std::strcpy(m_citizenId, citizenId);
		std::strcpy(m_name, name);
		std::strcpy(m_address, address);
	}
	
public:
	const char* getCitizenId() const { return m_citizenId; }
	const char* getName() const { return m_name; }
	const char* getAddress() const { return m_address; }
public:
	virtual double calculateInsurance() const = 0;
};
