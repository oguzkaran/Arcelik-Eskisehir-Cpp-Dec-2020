#ifndef POINT_HPP_
#define POINT_HPP_

class Point {
public:
	int x;
	int y;
	void offset(int dxy);
	void offset(int dx, int dy);
	void display(); //const olmali
};

#endif //POINT_HPP_
