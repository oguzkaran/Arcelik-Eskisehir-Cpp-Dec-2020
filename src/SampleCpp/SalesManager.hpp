#pragma once
#include "Manager.hpp"

class SalesManager : public Manager {
private:
	double m_extra;
public:
	SalesManager(const char* citizenId, const char* name, const char* address, double salary, const char* department, double extra)
		: Manager{ citizenId, name, address, salary, department }, m_extra{extra}
	{}

	int getExtra() const { return m_extra; }	
	double calculateInsurance() const override;
};
