#pragma once

#include "Employee.hpp"

class Worker : public Employee {
private:
	double m_feePerHour;
	int m_hourPerDay;
public:
	Worker(const char* citizenId, const char* name, const char* address, double feePerHour, int hourPerDay)
		: Employee{ citizenId, name, address }, m_feePerHour{ feePerHour }, m_hourPerDay{hourPerDay} 
	{}

	double getFeePerHour() const { return m_feePerHour; }
	int getHourPerDay() const { return m_hourPerDay; }
	double calculateInsurance() const override;
};
