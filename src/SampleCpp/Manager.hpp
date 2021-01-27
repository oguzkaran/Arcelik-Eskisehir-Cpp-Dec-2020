#pragma once

#include "Employee.hpp"

class Manager : public Employee {
private:
	double m_salary;
	char m_department[256];
};
