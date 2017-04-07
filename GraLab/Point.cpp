#include "stdafx.h"
#include "Point.h"
using namespace std;


Point::Point(){}

Point::Point(const int x, const int y) {
	this->x % 100;
	this->y % 100;
}

Point::~Point(){
	this->x = x;
	this->y = y;
}

bool Point::operator==(const Point & a)
{
	Point point;
	if ((this->x == a.x) && (this->y == a.y))
		return true;
	else 
		return false;
}

Point Point::operator+(const Point & b)
{
	Point point;
	point = Point((this->x + b.x), (this->y + b.y));
	return point;
}

Point Point::operator-(const Point & c)
{
	Point point;
	point = Point((this->x - c.x), (this->y - c.y));
	return point;
}

Point Point::operator*(int d)
{
	Point point;
	point.x =(this->x*d)%100;
	point.y=(this->y*d)%100;
	return point;
}
