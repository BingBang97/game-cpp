#include "stdafx.h"
#include "Wall.h"


string Wall::getTileType()
{
	return "W";
}

Wall::Wall(const int x, const int y)
{
	Point p(x, y);
	wall = "W";
}


Wall::~Wall()
{
}
