#include "SalesManager.hpp"

double SalesManager::calculateInsurance() const
{
	return Manager::calculateInsurance() + m_extra;
}