// GameLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"menu.h"
#include"Point.h"
#include<iostream>
#include <cassert>
#include<cstdlib>
#include<time.h>
using namespace std;

void Test_1() {

	Point p1(10, 90);
	Point p2(10, 20);
	Point p3(80, 10);
	assert(p1 + p2 == p3);
	assert(p1 + p3 == p2);
	assert(p3 + p2 == p1);
}
void Test_2() {

	Point p1(15, 65);
	Point p2(30, 20);
	Point p3(30, 70);
	assert(p1 - p2 == p3);
	assert(p1 - p3 == p2);
	assert(p3 - p2 == p1);
}
void Test_3() {

	Point p1(10, 90);
	Point p2(10, 20);
	Point p3(80, 10);
	assert(p1 * 2 == p3);
	assert(p1 * 3 == p2);
	assert(p3 * 8 == p1);
}
void Test_4() {

	Point p1(20, 10);
	Point p2(20, 10);
	Point p3(40, 20);
	assert(p1 + p2 == p3);
	assert(p3 - p1 == p2);
	assert(p1 * 2 == p3);
}
int main()
{
	srand(time(NULL));
	/*Point *punkt1=new Point(5,10);
	Point punkt2(7,6);
	Point punkt3(4, 9);
	Point p;
	p.wskaznik(punkt1);
	p.referenjca(punkt2);
	p.wartosc(punkt3);*/
	//Test_1();
	//Test_2();
	//Test_3();
	//Test_4();

	menu oMenu;
	oMenu.Menu();
}


