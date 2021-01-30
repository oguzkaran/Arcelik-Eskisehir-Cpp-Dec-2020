#pragma once

#include <cstring>
#include "Employee.hpp"

class Manager : public Employee {
private:
	double m_salary;
	char m_department[256];
public:
	Manager(const char* citizenId, const char* name, const char* address, double salary, const char *department)
		: Employee{ citizenId, name, address }, m_salary{salary}
	{
		std::strcpy(m_department, department);
	}

	double getSalary() const { return m_salary; }
	const char* getDepartment() const { return m_department; }
	double calculateInsurance() const override;
	//...
};
