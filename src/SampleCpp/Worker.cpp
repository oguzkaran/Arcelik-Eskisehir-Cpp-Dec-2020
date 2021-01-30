#include "Worker.hpp"

double Worker::calculateInsurance() const
{
	return m_feePerHour * m_hourPerDay * 30;
}