#include "stdafx.h"
#include "Point.h"
using namespace std;




Point::Point(Point &p)
{
	cout << "KONSTRUKTOR KOPIUJACY" << endl;
	this->x = p.x;
	this->y = p.y;
}

Point::Point(int x, int y) {
	this->x % 100;
	this->y % 100;
}

Point::~Point() {
	this->x = x;
	this->y = y;
}
Point::Point() {}
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
	point = Point((this->x + b.x) % 100, (this->y + b.y) % 100);
	return point;
}

Point Point::operator-(const Point & c)
{
	Point point;
	point = Point((this->x - c.x) % 100, (this->y - c.y) % 100);
	return point;
}

Point Point::operator*(int d)
{
	Point point;
	point.x = (this->x*d) % 100;
	point.y = (this->y*d) % 100;
	return point;
}

Point Point::wskaznik(Point * punkt)
{
	cout << "przez wskaznik" << endl;
	return *punkt;
}

Point Point::referenjca(Point & punkt)
{
	cout << "przez referencje" << endl;
	return punkt;
}

Point Point::wartosc(Point punkt)
{
	cout << "przez wartosc" << endl;
	return punkt;
}
