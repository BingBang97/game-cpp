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

	Point();
	Point(const int&x, const int&y);
	~Point();
	bool operator==(const Point &a);
	Point operator+ (const Point &b);
	Point operator-(const Point &c);
	Point operator*(const double &d);
};

