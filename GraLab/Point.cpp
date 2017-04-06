#include "stdafx.h"
#include "Point.h"
using namespace std;


Point::Point(){}

Point::Point(const int &x, const int&y) {}

Point::~Point(){}

bool Point::operator==(const Point & a)
{
	Point point;
	if (((this->x == a.x)%100) && ((this->y == a.y)) % 100)
		return true;
	else 
		return false;
}

Point Point::operator+(const Point & b)
{
	Point point;
	point = Point((this->x + b.x)%100, (this->y + b.y)%100);
	return point;
}

Point Point::operator-(const Point & c)
{
	Point point;
	point = Point((this->x - c.x)%100, (this->y - c.y)%100);
	return point;
}

Point Point::operator*(const double & d)
{
	Point point;
	(point.x =this->x*d) % 100;
	(point.y=this->y*d) % 100;
	return point;
}
