#include "Point.h"

void Point::Print()const {
	cout << "(" << _x << ", " << _y << ")\n";
}

Point::Point() {
	_x = 0;
	_y = 0;
}

Point::Point(COOR_T x, COOR_T y) {
	setX(x);
	//_x = x;
	setY(y);
	//_y = y;
}


Point Point::operator+(const Point& pt2) const
{
	Point pt;
	pt.setX(this->_x + pt2._x);
	pt.setY(this->_y + pt2._y);
	return pt;		
}
Point Point::operator-(const Point& pt2) const
{
	Point pt;
	pt.setX(this->_x - pt2._x);
	pt.setY(this->_y - pt2._y);
	return pt;
}
Point::Point(const Point& pt) {
	cout << "복사 생성자 호출됨!!" << endl;
	_x = pt._x;
	_y = pt._y;
}

void Point::Offset(COOR_T x_delta, COOR_T y_delta) {
	setX(_x + x_delta);
	setY(_y + y_delta);
}
void Point::Offset(const Point& pt) {
	Offset(pt._x, pt._y);
}