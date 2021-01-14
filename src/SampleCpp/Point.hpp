#ifndef POINT_HPP_
#define POINT_HPP_

class Point {
public:
	int x;
	int y;
public:
	explicit Point(int a = 0, int b = 0) : x{ a }, y{ b } 
	{}
public:
	void offset(int dxy);
	void offset(int dx, int dy);
	double distance(const Point& r) const;
	double distance(int a = 0, int b = 0) const;
	void display() const;
};

#endif //POINT_HPP_
