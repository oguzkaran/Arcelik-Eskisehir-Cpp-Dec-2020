#pragma once

#include "Employee.hpp"

class Worker : public Employee {
private:
	double m_feePerHour;
	int m_hourPerDay;
};
