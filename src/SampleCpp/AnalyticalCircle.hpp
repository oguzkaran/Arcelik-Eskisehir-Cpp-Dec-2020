#ifndef ANALYTICALCIRCLE_HPP_
#define ANALYTICALCIRCLE_HPP_

#include "Circle.hpp"
#include "Point.hpp"

namespace csd::util {
	class AnalyticalCircle : public Circle {	
		Point m_center;
	public:
		explicit AnalyticalCircle(double r, const Point& p);
		explicit AnalyticalCircle(double r = 0, int x = 0, int y = 0);
	public:
		int getX() const { return m_center.x; }
		int getY() const { return m_center.y; }
		Point getCenter() const { return m_center; }
		void setX(int x);
		void setY(int y);
		void setCenter(const Point &p);

		void offset(int dxy); //passthrough, forwarding, delegate function
		void offset(int dx, int dy); //passthrough, forwarding, delegate function
	};
}

#endif // ANALYTICALCIRCLE_HPP_




