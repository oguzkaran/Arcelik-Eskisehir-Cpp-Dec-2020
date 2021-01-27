#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

namespace csd::util {
	class Circle {
		double m_r;
		double m_pi;
	public:
		explicit Circle(double radius = 0, double pi = 3.14159265359);
	public:
		double getRadius() const { return m_r; }
		double getPI() const { return m_pi; }
		void setRadius(double val);
		void setRadius(double val, double pi);
		double getArea() const { return m_pi * m_r * m_r; }
		double getCircumference() const { return 2 * m_pi * m_r; }
		void setPI(double pi);
	};
}

#endif // CIRCLE_HPP_

