#pragma once
#include<string>
#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	bool operator==(const Point &a);
	Point operator+ (const Point &b);
	Point operator-(const Point &c);
	Point operator*(int d);

	Point wskaznik(Point *punkt);
	Point referenjca(Point &punkt);
	Point wartosc(Point punkt);

	Point(Point&);
	Point(int x, int y);
	Point();
	~Point();

};