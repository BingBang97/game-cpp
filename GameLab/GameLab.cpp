// GameLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"menu.h"
#include"Point.h"
#include<iostream>
#include <cassert>
#include<cstdlib>
using namespace std;

void Test() {

	Point p1(10, 90);
	Point p2(10, 20);
	Point p3(80, 10);
	assert(p1 + p2 == p3);
	assert(p1 - p2 == p3);
	assert(p1 * 2 == p3);
}

int main()
{
	Point *punkt1=new Point(5,10);
	Point punkt2(7,6);
	Point punkt3(4, 9);
	Point p;
	p.wskaznik(punkt1);
	p.referenjca(punkt2);
	p.wartosc(punkt3);
	//Test();
	menu oMenu;
	oMenu.Menu();
}


