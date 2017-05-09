#include "stdafx.h"
#include "Wall.h"


void Wall::draw()
{
	cout<< "W";
}

Wall::Wall(const int x, const int y)
{
	Point p(x, y);
	wall= "W";
}

Wall::Wall()
{
}


Wall::~Wall()
{
}
